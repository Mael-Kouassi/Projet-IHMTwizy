/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2025  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : ID_SCREEN_00_Slots.c
Purpose     : AppWizard managed file, function content could be changed
---------------------------END-OF-HEADER------------------------------
*/
#include "Application.h"
#include "../Generated/Resource.h"
#include "../Generated/ID_SCREEN_00.h"

/*** Begin of user code area ***/
#include "Driver_CAN.h"
#include "stm32f7xx.h"                  // Device header
#include <stdio.h>
#include "cmsis_os2.h"                  // ::CMSIS:RTOS2

int compteg=0;
int compted=0;
int id;
uint8_t donnees[8];
int distancetotale;
extern ARM_DRIVER_CAN Driver_CAN1;
ARM_CAN_MSG_INFO rx_msg_info;
//ARM_CAN_MSG_INFO tx_msg_info;


void CAN_Receive_Handler(uint32_t obj_idx) {
    ARM_CAN_MSG_INFO msg_info;
    uint8_t data[8];

    if (Driver_CAN1.MessageRead(obj_idx, &msg_info, data, 8) == 8) {
        int vitesse = (data[0] << 8) | data[1];
        vitesse = vitesse * 0.01;

        char buffer[20];
        sprintf(buffer, "%3d", vitesse);
        APPW_SetText(ID_SCREEN_00, ID_TEXT_00, buffer); // Affiche vitesse

        int distance = (data[2] << 20) | (data[3] << 12) | (data[4] << 4) | ((data[5] & 0xF0) >> 4);
        distance = distance * 0.01;
        sprintf(buffer, "%7d", distance);
        APPW_SetText(ID_SCREEN_00, ID_TEXT_06, buffer); // Affiche distance
    }
}

/*
void CAN_Send_Test(void) {
    ARM_CAN_MSG_INFO msg;
    msg.id = ARM_CAN_STANDARD_ID(0x5F8);
    msg.rtr = 0;
    msg.dlc = 1;
    uint8_t data[1] = {0xFA};
    Driver_CAN1.MessageSend(1, &msg, data, 1);
}
*/
/*** End of user code area ***/

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       cbID_SCREEN_00
*/
void cbID_SCREEN_00(WM_MESSAGE * pMsg) {
  GUI_USE_PARA(pMsg);
}

/*********************************************************************
*
*       ID_SCREEN_00__APPW_NOTIFICATION_CREATE__ID_TIMER_00__APPW_JOB_START
*/
void ID_SCREEN_00__APPW_NOTIFICATION_CREATE__ID_TIMER_00__APPW_JOB_START(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED
*/
void ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {int x=0;}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_02__WM_NOTIFICATION_CLICKED__ID_IMAGE_04_frein__APPW_JOB_SETVIS
*/
void ID_SCREEN_00__ID_BUTTON_02__WM_NOTIFICATION_CLICKED__ID_IMAGE_04_frein__APPW_JOB_SETVIS(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  char texte[10] ;
	
	GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
	//sprintf(texte, "A");
	//APPW_SetText(ID_SCREEN_00, ID_TEXT_06, texte);
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_03__WM_NOTIFICATION_CLICKED__ID_IMAGE_02_feuxposoff__APPW_JOB_SETVIS
*/
void ID_SCREEN_00__ID_BUTTON_03__WM_NOTIFICATION_CLICKED__ID_IMAGE_02_feuxposoff__APPW_JOB_SETVIS(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_04__WM_NOTIFICATION_CLICKED__ID_IMAGE_03_feuxrouteoff__APPW_JOB_SETVIS
*/
void ID_SCREEN_00__ID_BUTTON_04__WM_NOTIFICATION_CLICKED__ID_IMAGE_03_feuxrouteoff__APPW_JOB_SETVIS(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_PROGBAR_00__WM_NOTIFICATION_VALUE_CHANGED
*/
void ID_SCREEN_00__ID_PROGBAR_00__WM_NOTIFICATION_VALUE_CHANGED(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {int test;}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED_0
*/
void ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
  if (compteg == 0){
	compteg = 1;}
  else{
	compteg = 0;}
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_BUTTON_01__WM_NOTIFICATION_CLICKED
*/
void ID_SCREEN_00__ID_BUTTON_01__WM_NOTIFICATION_CLICKED(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
  GUI_USE_PARA(pAction);
  GUI_USE_PARA(hScreen);
  GUI_USE_PARA(pMsg);
  GUI_USE_PARA(pResult);
  if (compted == 0){
	compted = 1;}
  else{
	compted = 0;}
}

/*********************************************************************
*
*       ID_SCREEN_00__ID_TIMER_00__APPW_NOTIFICATION_TIMER
*/
void ID_SCREEN_00__ID_TIMER_00__APPW_NOTIFICATION_TIMER(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult) {
if (compted == 1){
	
}

else if (compteg == 1){

}
//CAN_Send_Test();
}

/*************************** End of file ****************************/
