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
File        : Resource.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef RESOURCE_H
#define RESOURCE_H

#include "AppWizard.h"

/*********************************************************************
*
*       Text
*/
#define ID_RTEXT_0 0
#define ID_RTEXT_1 1
#define ID_RTEXT_2 2
#define ID_RTEXT_3 3
#define ID_RTEXT_4 4
#define ID_RTEXT_5 5
#define ID_RTEXT_6 6
#define ID_RTEXT_7 7
#define ID_RTEXT_8 8

#define APPW_MANAGE_TEXT APPW_MANAGE_TEXT_EXT
extern GUI_CONST_STORAGE unsigned char acAPPW_Language_0[];

/*********************************************************************
*
*       Fonts
*/
extern GUI_CONST_STORAGE unsigned char acNettoOT_24_Normal_EXT_AA4[];
extern GUI_CONST_STORAGE unsigned char acNettoOT_32_Normal_EXT_AA4[];

/*********************************************************************
*
*       Images
*/
extern GUI_CONST_STORAGE unsigned char acflechepetit[];
extern GUI_CONST_STORAGE unsigned char acflechepetitdroite[];
extern GUI_CONST_STORAGE unsigned char acDARK_Progbar_Tile_H_Green_1x16[];
extern GUI_CONST_STORAGE unsigned char acDARK_Progbar_Tile_V_Gray_16x1[];
extern GUI_CONST_STORAGE unsigned char acfeuxdecroisementonp[];
extern GUI_CONST_STORAGE unsigned char acpharesdecroisementpetit[];
extern GUI_CONST_STORAGE unsigned char acfeuxderouteonp[];
extern GUI_CONST_STORAGE unsigned char acfeuxderoutepetit[];
extern GUI_CONST_STORAGE unsigned char acfreinamainoffp[];
extern GUI_CONST_STORAGE unsigned char acfprondpetit[];
extern GUI_CONST_STORAGE unsigned char acDARK_Switch_Body_H_On_55x20[];
extern GUI_CONST_STORAGE unsigned char acDARK_Switch_Body_H_Off_55x20[];
extern GUI_CONST_STORAGE unsigned char acDARK_Switch_Thumb_26x26[];
extern GUI_CONST_STORAGE unsigned char acbatterietemppetit[];
extern GUI_CONST_STORAGE unsigned char acroutepetit[];
extern GUI_CONST_STORAGE unsigned char acRenaultLogop[];

/*********************************************************************
*
*       Animations
*/
#define ID_ANIM_000 (GUI_ID_USER + 0)
#define ID_ANIM_001 (GUI_ID_USER + 1)

extern GUI_CONST_STORAGE APPW_ANIM_DATA ID_ANIM_000_Data;
extern GUI_CONST_STORAGE APPW_ANIM_DATA ID_ANIM_001_Data;

/*********************************************************************
*
*       Screens
*/
#define ID_SCREEN_00 (GUI_ID_USER + 4096)

extern APPW_ROOT_INFO ID_SCREEN_00_RootInfo;

#define APPW_INITIAL_SCREEN &ID_SCREEN_00_RootInfo

/*********************************************************************
*
*       Project path
*/
#define APPW_PROJECT_PATH "C:/Users/maelk/Documents/template_appwizard/projet_template/appwizard/ihm_twizy"

#endif  // RESOURCE_H

/*************************** End of file ****************************/
