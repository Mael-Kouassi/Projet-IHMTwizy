package com.example.twizy;

import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothSocket;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.activity.result.ActivityResultLauncher;
import androidx.annotation.NonNull;
import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import androidx.activity.result.contract.ActivityResultContracts;

import static com.example.twizy.Constants.TAG;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.UUID;

public class MainActivity extends AppCompatActivity {

    private static final int REQUEST_LOCATION_PERMISSION = 1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        BluetoothManager bluetoothManager;
        BluetoothAdapter bluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        checkAndRequestBluetoothPermissions();

        IntentFilter filter = new IntentFilter();
        filter.addAction(BluetoothDevice.ACTION_FOUND);
        filter.addAction(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
        registerReceiver(bluetoothReceiver, filter);


        Button connect = findViewById(R.id.buttonconnect);
        connect.setEnabled(false);
        ActivityResultLauncher<Intent> requeteActivationBT;


        requeteActivationBT = registerForActivityResult(
                new ActivityResultContracts.StartActivityForResult(),
                result -> {
                    if (result.getResultCode() == Activity.RESULT_OK) {
                        Toast.makeText(MainActivity.this, "Bluetooth activé", Toast.LENGTH_SHORT).show();
                        connect.setEnabled(true);
                    } else {
                        Toast.makeText(MainActivity.this, "Bluetooth non activé", Toast.LENGTH_SHORT).show();
                    }
                }
        );

        Button activerbt = findViewById(R.id.activerbt);
        activerbt.setOnClickListener(view ->{
            Log.d(TAG,"activerbt push");
            if (bluetoothAdapter.isEnabled()) {
                Toast.makeText(MainActivity.this, "BT déjà activé", Toast.LENGTH_SHORT).show();
                // activer un bouton (A COMPLETER PLUS TARD)
                connect.setEnabled(true);
            } else {
                Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);//permet de faire un apparaitre un pop up pour demander à l'utilisateur d'activer le bluetooth
                requeteActivationBT.launch(enableBtIntent);

        };
    });

        ListView listView1 = findViewById(R.id.Listview1);
        List<BluetoothDevice> deviceList = new ArrayList<>();
        List<String> deviceNamesList = new ArrayList<>();
        Button paired = findViewById(R.id.btnpaired);
        paired.setOnClickListener(view ->{
            Log.d(TAG,"paired push");
            Set<BluetoothDevice> listdevice;
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S &&
                    checkSelfPermission(Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(MainActivity.this, "Permission BLUETOOTH_CONNECT requise", Toast.LENGTH_SHORT).show();
                ActivityCompat.requestPermissions(MainActivity.this,
                        new String[]{Manifest.permission.BLUETOOTH_CONNECT},
                        REQUEST_BLUETOOTH_PERMISSIONS);
                return;
            }
            listdevice = bluetoothAdapter.getBondedDevices();
            Log.d("Bluetooth", "Nombre d'appareils jumelés : " + listdevice.size());
            deviceList.clear();
            deviceNamesList.clear();
            for (BluetoothDevice device : listdevice) {
                String deviceName = device.getName();
                String deviceHardwareAddress = device.getAddress(); // MAC address
                Log.d("Bluetooth", "Appareil jumelé : " + deviceName + " [" + deviceHardwareAddress + "]");
                deviceList.add(device);
                deviceNamesList.add(deviceName + "\n" + deviceHardwareAddress);
            }
            ArrayAdapter<String> adapter = new ArrayAdapter<>(
                    this,
                    android.R.layout.simple_list_item_1,
                    deviceNamesList
            );

            listView1.setAdapter(adapter);
            adapter.notifyDataSetChanged();
        });
        listView1.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int pos, long id) {
                BluetoothDevice connectTo = deviceList.get(pos);

                ConnectThread connectThread = new ConnectThread(connectTo);
                connectThread.start();

                //String devname= ;
//                String item = (String) parent.getItemAtPosition(pos);
//                String[] parts = item.split("\n");
//                if (parts.length >= 2) {
//                    String address = parts[1]; // deuxième ligne : adresse MAC
//
//                    BluetoothDevice device = bluetoothAdapter.getRemoteDevice(address);
//                    Log.i("BT", "Device choisi - " + device.getName() + " - " + address);
//
//                    ConnectThread connectThread = new ConnectThread(device);
//                    connectThread.start();
//                } else {
//                    Log.e("BT", "Format de l'élément inattendu : " + item);
//                    Toast.makeText(MainActivity.this, "Élément invalide sélectionné", Toast.LENGTH_SHORT).show();
//                }
            }
        });
    Button search = findViewById(R.id.recherche);
    search.setOnClickListener(view ->{
        bluetoothAdapter.startDiscovery();
    });

    }

    private static final int REQUEST_BLUETOOTH_PERMISSIONS = 1;

    private void checkAndRequestBluetoothPermissions() {
        List<String> permissionsToAsk = new ArrayList<>();

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            if (checkSelfPermission(Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.BLUETOOTH_CONNECT);
            }
            if (checkSelfPermission(Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.BLUETOOTH_SCAN);
            }
            if (checkSelfPermission(Manifest.permission.BLUETOOTH_ADVERTISE) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.BLUETOOTH_ADVERTISE);
            }
        } else {
            if (checkSelfPermission(Manifest.permission.BLUETOOTH) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.BLUETOOTH);
            }
            if (checkSelfPermission(Manifest.permission.BLUETOOTH_ADMIN) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.BLUETOOTH_ADMIN);
            }
            if (checkSelfPermission(Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
                permissionsToAsk.add(Manifest.permission.ACCESS_FINE_LOCATION);
            }
        }

        if (!permissionsToAsk.isEmpty()) {
            ActivityCompat.requestPermissions(
                    this,
                    permissionsToAsk.toArray(new String[0]),
                    REQUEST_BLUETOOTH_PERMISSIONS
            );
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        unregisterReceiver(bluetoothReceiver);
    }

    @Override
    public void onRequestPermissionsResult(int requestCode,
                                           @NonNull String[] permissions,
                                           @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);

        if (requestCode == REQUEST_BLUETOOTH_PERMISSIONS) {
            for (int i = 0; i < permissions.length; i++) {
                if (grantResults[i] == PackageManager.PERMISSION_GRANTED) {
                    Log.i("Permission", "Permission accordée : " + permissions[i]);
                } else {
                    Log.e("Permission", "Permission refusée : " + permissions[i]);
                    Toast.makeText(this, "Permission refusée : " + permissions[i], Toast.LENGTH_SHORT).show();
                }
            }
        }
    }


    public void Connect(View v){
//        Intent connection = new Intent(MainActivity.this, BluetoothService.class);
//        connection.setAction("com.example.twiz.ACTION_SCAN");
//        startService(connection);
        Log.d(TAG, "Connect");
    }


    final BroadcastReceiver bluetoothReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if(intent != null){
                final String action = intent.getAction();
                if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_STARTED)){
                    Log.d(TAG,"action discovery started");
                }
                else if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED)){
                    Log.d(TAG,"action discovery finished");
                }
                else if(action.equals(BluetoothDevice.ACTION_FOUND)){
                    BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                    Log.d(TAG,"device found : " + device.getAddress());
                    if(device != null){
                        String deviceName = device.getName();
                        String deviceAddress = device.getAddress();
                        Log.d(TAG,"Appareil trouvé = " + deviceAddress);
                        if(deviceName != null){
                            Log.d(TAG, "Nom de l'appareil trouvé = " + deviceName);
                        }
                    }
                }
            }
        }
    };
}
class ConnectThread extends Thread{
    private static final UUID MY_UUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
    private BluetoothSocket mmSocket;
    private BluetoothDevice mmDevice;
    public ConnectThread(BluetoothDevice device){
        mmDevice = device;
        BluetoothSocket tmp = null;

        try{
            tmp = mmDevice.createInsecureRfcommSocketToServiceRecord(MY_UUID);
        }
        catch (IOException e){
            Log.e("BT", "Socket création échouée : " + e);
        }

        mmSocket = tmp;

    }

    public void run(){
        BluetoothAdapter.getDefaultAdapter().cancelDiscovery();//annule la découvert pour éviter de ralentir la connexion
        try{
            if(mmSocket!=null) {
                Log.i("BT", "attente connexion");
                mmSocket.connect();
                Log.i("BT", "fin attente connexion - logiquement connexion OK");
            }
            else {
                Log.e("BT", "Le socket est null !");
            }
        } catch (IOException e) {
            Log.e("BT", "Socket connection erreur : " + e);
        }

        while(mmSocket.isConnected()){
            InputStream tmpIn = null;//ces deux variables vont permettre de lire et d'écrire sur la connexion bluetooth
            OutputStream tmpOut = null;
            try {
                tmpOut = mmSocket.getOutputStream();//récupère flux d'envoi des données
                tmpIn = mmSocket.getInputStream();//récupère flux de réception des donées
                byte[] buffer = new byte[1024];
                int bytes;
                while(true){
                    try{
                        bytes = tmpIn.read(buffer);
                        String data = new String(buffer, 0, bytes);
                        Log.d("BT", "Reçu : " + data);
                    }catch (IOException closeException) {
                        Log.e("BT", "Impossible de fermer le socket", closeException);
                    }
                }
            } catch (IOException e) {
                Log.d(TAG, "Failed to retrieve streams from socket : " + e.getMessage());
                break;
            }
        }

    }


    public void cancel() {
        try {
            mmSocket.close();
        } catch (IOException e) {
            Log.e("BT", "Erreur lors de la fermeture du socket", e);
        }
    }

}


















