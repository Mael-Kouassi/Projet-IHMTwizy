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
File        : ID_SCREEN_00.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_00_H
#define ID_SCREEN_00_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_BOX_00                (GUI_ID_USER + 1)
#define ID_IMAGE_00              (GUI_ID_USER + 2)
#define ID_IMAGE_01              (GUI_ID_USER + 3)
#define ID_BUTTON_00             (GUI_ID_USER + 4)
#define ID_BUTTON_01             (GUI_ID_USER + 5)
#define ID_TIMER_00              (GUI_ID_USER + 8)
#define ID_GAUGE_00              (GUI_ID_USER + 9)
#define ID_TEXT_00               (GUI_ID_USER + 10)
#define ID_PROGBAR_00            (GUI_ID_USER + 11)
#define ID_TEXT_01               (GUI_ID_USER + 12)
#define ID_TEXT_02               (GUI_ID_USER + 13)
#define ID_IMAGE_02_feuxposon    (GUI_ID_USER + 19)
#define ID_IMAGE_02_feuxposoff   (GUI_ID_USER + 14)
#define ID_IMAGE_03_feuxrouteon  (GUI_ID_USER + 27)
#define ID_IMAGE_03_feuxrouteoff (GUI_ID_USER + 15)
#define ID_IMAGE_04_freinoff     (GUI_ID_USER + 18)
#define ID_IMAGE_04_frein        (GUI_ID_USER + 16)
#define ID_SWITCH_00             (GUI_ID_USER + 20)
#define ID_TEXT_05               (GUI_ID_USER + 21)
#define ID_IMAGE_06              (GUI_ID_USER + 22)
#define ID_IMAGE_07              (GUI_ID_USER + 23)
#define ID_TEXT_06               (GUI_ID_USER + 24)
#define ID_TEXT_07               (GUI_ID_USER + 25)
#define ID_TEXT_08               (GUI_ID_USER + 26)
#define ID_BUTTON_02             (GUI_ID_USER + 17)
#define ID_BUTTON_03             (GUI_ID_USER + 28)
#define ID_BUTTON_04             (GUI_ID_USER + 29)
#define ID_IMAGE_02              (GUI_ID_USER + 30)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_00__APPW_NOTIFICATION_CREATE__ID_TIMER_00__APPW_JOB_START                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_02__WM_NOTIFICATION_CLICKED__ID_IMAGE_04_frein__APPW_JOB_SETVIS       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_03__WM_NOTIFICATION_CLICKED__ID_IMAGE_02_feuxposoff__APPW_JOB_SETVIS  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_04__WM_NOTIFICATION_CLICKED__ID_IMAGE_03_feuxrouteoff__APPW_JOB_SETVIS(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_PROGBAR_00__WM_NOTIFICATION_VALUE_CHANGED                                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED_0                                         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_BUTTON_01__WM_NOTIFICATION_CLICKED                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_00__ID_TIMER_00__APPW_NOTIFICATION_TIMER                                            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_00(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_00_H

/*************************** End of file ****************************/
