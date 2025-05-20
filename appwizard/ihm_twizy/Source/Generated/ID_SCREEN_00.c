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
File        : ID_SCREEN_00.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_00.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _aCreate
*/
static APPW_CREATE_ITEM _aCreate[] = {
  { WM_OBJECT_WINDOW_Create,
    ID_SCREEN_00, 0,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 23, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 430, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 204, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_02, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 429, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 26, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 201, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 27, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      36, 36, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 444, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 27, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      36, 36, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, -15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 27, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      51, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_01, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 437, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 23, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      51, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TIMER_Create,
    ID_TIMER_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_GAUGE_Create,
    ID_GAUGE_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 49, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 100, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 190, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_PROGBAR_Create,
    ID_PROGBAR_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 11, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 68, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      16, 200, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 25, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 240, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 314, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_NULL, 98, 0, 0 },
        { DISPOSE_MODE_NULL, 148, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static GUI_CONST_STORAGE APPW_SETUP_ITEM _aSetup[] = {
  { ID_BOX_00,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_02,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_IMAGE_00,   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acflechepetit),
                                                 ARG_V(939), } },
  { ID_IMAGE_00,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_INVALID_COLOR) } },
  { ID_IMAGE_01,   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acflechepetitdroite),
                                                 ARG_V(1011), } },
  { ID_BUTTON_00,  APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_00,  APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                 ARG_V(0xffc0c0c0),
                                                 ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_00,  APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_INVALID_COLOR),
                                                 ARG_V(GUI_INVALID_COLOR),
                                                 ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_01,  APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_01,  APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                 ARG_V(0xffc0c0c0),
                                                 ARG_V(GUI_INVALID_COLOR) } },
  { ID_TIMER_00,   APPW_SET_PROP_PERIOD,       { ARG_V(100) } },
  { ID_GAUGE_00,   APPW_SET_PROP_ALIGNBITMAP,  { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_BOTTOM),
                                                 ARG_V(0),
                                                 ARG_V(4294967286) } },
  { ID_GAUGE_00,   APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                 ARG_V(1800) } },
  { ID_GAUGE_00,   APPW_SET_PROP_SPAN,         { ARG_V(0),
                                                 ARG_V(999) } },
  { ID_GAUGE_00,   APPW_SET_PROP_RADIUS,       { ARG_V(80) } },
  { ID_GAUGE_00,   APPW_SET_PROP_COLORS,       { ARG_V(0xff2c2c30),
                                                 ARG_V(0xff2777b3),
                                                 ARG_V(GUI_INVALID_COLOR) } },
  { ID_GAUGE_00,   APPW_SET_PROP_VALUES,       { ARG_V(19),
                                                 ARG_V(13) } },
  { ID_GAUGE_00,   APPW_SET_PROP_ROUNDEDVAL,   { ARG_V(0) } },
  { ID_GAUGE_00,   APPW_SET_PROP_ROUNDEDEND,   { ARG_V(0) } },
  { ID_GAUGE_00,   APPW_SET_PROP_VALUE,        { ARG_V(250) } },
  { ID_TEXT_00,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_00,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                 ARG_V(0),
                                                 ARG_V(0) } },
  { ID_TEXT_00,    APPW_SET_PROP_COLOR2,       { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_00,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_0) } },
  { ID_TEXT_00,    APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_24_Normal_EXT_AA4) } },
  { ID_PROGBAR_00, APPW_SET_PROP_VERTICAL,     { ARG_V(0) } },
  { ID_PROGBAR_00, APPW_SET_PROP_RADIUS,       { ARG_V(5) } },
  { ID_PROGBAR_00, APPW_SET_PROP_FRAME,        { ARG_V(2) } },
  { ID_PROGBAR_00, APPW_SET_PROP_COLOR,        { ARG_V(0xff2c2c30) } },
  { ID_PROGBAR_00, APPW_SET_PROP_VALUE,        { ARG_V(40) } },
  { ID_PROGBAR_00, APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, acDARK_Progbar_Tile_V_Blue_16x1),
                                                 ARG_VP(0, acDARK_Progbar_Tile_V_Gray_16x1), } },
  { ID_PROGBAR_00, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_TEXT_01,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_01,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                 ARG_V(0),
                                                 ARG_V(0) } },
  { ID_TEXT_01,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_1) } },
  { ID_TEXT_01,    APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
  { ID_TEXT_02,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_02,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                 ARG_V(0),
                                                 ARG_V(0) } },
  { ID_TEXT_02,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_2) } },
  { ID_TEXT_02,    APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
};

/*********************************************************************
*
*       _aAction
*/
static GUI_CONST_STORAGE APPW_ACTION_ITEM _aAction[] = {
  { ID_BUTTON_00,  WM_NOTIFICATION_CLICKED,          0,             APPW_JOB_NULL,           ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED,
  },
  { ID_TIMER_00,   APPW_NOTIFICATION_TIMER,          ID_TIMER_00,   APPW_JOB_START,          ID_SCREEN_00__ID_TIMER_00__APPW_NOTIFICATION_TIMER__ID_TIMER_00__APPW_JOB_START,
  },
};

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
/*********************************************************************
*
*       ID_SCREEN_00_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_00_RootInfo = {
  ID_SCREEN_00,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_00,
  0
};

/*************************** End of file ****************************/
