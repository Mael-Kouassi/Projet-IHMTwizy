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
    { { { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 23, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      51, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_01, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 436, 0, 0 },
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
    { { { DISPOSE_MODE_REL_PARENT, 30, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 239, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      115, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 313, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02_feuxposon, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02_feuxposoff, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 68, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03_feuxrouteon, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03_feuxrouteoff, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04_freinoff, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 340, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 109, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 34, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04_frein, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 340, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_SWITCH_Create,
    ID_SWITCH_00, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 212, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      1, 1, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 185, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 240, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      123, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_06, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 155, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 221, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_07, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 233, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 344, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 240, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      134, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 25, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 221, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 25, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_02, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 335, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_03, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BUTTON_Create,
    ID_BUTTON_04, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 55, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_00,
    { { { DISPOSE_MODE_REL_PARENT, 205, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 39, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static GUI_CONST_STORAGE APPW_SETUP_ITEM _aSetup[] = {
  { ID_BOX_00,                APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_IMAGE_00,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acflechepetit),
                                                            ARG_V(939), } },
  { ID_IMAGE_00,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_INVALID_COLOR) } },
  { ID_IMAGE_01,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acflechepetitdroite),
                                                            ARG_V(1011), } },
  { ID_BUTTON_00,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_00,             APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                            ARG_V(0xffc0c0c0),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_00,             APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_INVALID_COLOR),
                                                            ARG_V(GUI_INVALID_COLOR),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_01,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_01,             APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                            ARG_V(0xffc0c0c0),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_TIMER_00,              APPW_SET_PROP_PERIOD,       { ARG_V(1000) } },
  { ID_TIMER_00,              APPW_SET_PROP_AUTORESTART,  { ARG_V(0) } },
  { ID_GAUGE_00,              APPW_SET_PROP_ALIGNBITMAP,  { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_BOTTOM),
                                                            ARG_V(0),
                                                            ARG_V(4294967286) } },
  { ID_GAUGE_00,              APPW_SET_PROP_RANGE,        { ARG_V(-4),
                                                            ARG_V(1796) } },
  { ID_GAUGE_00,              APPW_SET_PROP_SPAN,         { ARG_V(0),
                                                            ARG_V(999) } },
  { ID_GAUGE_00,              APPW_SET_PROP_RADIUS,       { ARG_V(77) } },
  { ID_GAUGE_00,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                            ARG_V(GUI_BLUE),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_GAUGE_00,              APPW_SET_PROP_VALUES,       { ARG_V(19),
                                                            ARG_V(13) } },
  { ID_GAUGE_00,              APPW_SET_PROP_ROUNDEDVAL,   { ARG_V(0) } },
  { ID_GAUGE_00,              APPW_SET_PROP_ROUNDEDEND,   { ARG_V(0) } },
  { ID_GAUGE_00,              APPW_SET_PROP_VALUE,        { ARG_V(0) } },
  { ID_TEXT_00,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_00,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_00,               APPW_SET_PROP_COLOR2,       { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_00,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_0) } },
  { ID_TEXT_00,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_24_Normal_EXT_AA4) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_VERTICAL,     { ARG_V(0) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_RADIUS,       { ARG_V(5) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_FRAME,        { ARG_V(2) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_GREEN) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_VALUE,        { ARG_V(40) } },
  { ID_PROGBAR_00,            APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, acDARK_Progbar_Tile_H_Green_1x16),
                                                            ARG_VP(0, acDARK_Progbar_Tile_V_Gray_16x1), } },
  { ID_PROGBAR_00,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_TEXT_01,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_01,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_01,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_1) } },
  { ID_TEXT_01,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
  { ID_TEXT_02,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_02,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_02,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_2) } },
  { ID_TEXT_02,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
  { ID_IMAGE_02_feuxposon,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02_feuxposon,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfeuxdecroisementonp),
                                                            ARG_V(1893), } },
  { ID_IMAGE_02_feuxposoff,   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02_feuxposoff,   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acpharesdecroisementpetit),
                                                            ARG_V(2151), } },
  { ID_IMAGE_03_feuxrouteon,  APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03_feuxrouteon,  APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfeuxderouteonp),
                                                            ARG_V(1274), } },
  { ID_IMAGE_03_feuxrouteoff, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03_feuxrouteoff, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfeuxderoutepetit),
                                                            ARG_V(1219), } },
  { ID_IMAGE_04_freinoff,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04_freinoff,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfreinamainoffp),
                                                            ARG_V(1364), } },
  { ID_IMAGE_04_frein,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04_frein,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfprondpetit),
                                                            ARG_V(2288), } },
  { ID_IMAGE_04_frein,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_INVALID_COLOR) } },
  { ID_SWITCH_00,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, acDARK_Switch_Body_H_On_55x20),
                                                            ARG_VP(0, acDARK_Switch_Body_H_Off_55x20),
                                                            ARG_VP(0, NULL),
                                                            ARG_VP(0, acDARK_Switch_Thumb_26x26),
                                                            ARG_VP(0, acDARK_Switch_Thumb_26x26), } },
  { ID_SWITCH_00,             APPW_SET_PROP_FADE,         { ARG_V(0) } },
  { ID_TEXT_05,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_05,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_05,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_5) } },
  { ID_TEXT_05,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
  { ID_IMAGE_06,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acbatterietemppetit),
                                                            ARG_V(1218), } },
  { ID_IMAGE_07,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acroutepetit),
                                                            ARG_V(2579), } },
  { ID_TEXT_06,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_06,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_06,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_6) } },
  { ID_TEXT_06,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_32_Normal_EXT_AA4) } },
  { ID_TEXT_07,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_07,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_07,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_24_Normal_EXT_AA4) } },
  { ID_TEXT_07,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_7) } },
  { ID_TEXT_08,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_08,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_08,               APPW_SET_PROP_FONT,         { ARG_VP(0, acNettoOT_24_Normal_EXT_AA4) } },
  { ID_TEXT_08,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_8) } },
  { ID_BUTTON_02,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_02,             APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                            ARG_V(0xffc0c0c0),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_03,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_03,             APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                            ARG_V(0xffc0c0c0),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_BUTTON_04,             APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL), } },
  { ID_BUTTON_04,             APPW_SET_PROP_COLORS,       { ARG_V(0xffc0c0c0),
                                                            ARG_V(0xffc0c0c0),
                                                            ARG_V(GUI_INVALID_COLOR) } },
  { ID_IMAGE_02,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acRenaultLogop),
                                                            ARG_V(1261), } },
};

/*********************************************************************
*
*       _aAction
*/
static GUI_CONST_STORAGE APPW_ACTION_ITEM _aAction[] = {
  { ID_SCREEN_00,             APPW_NOTIFICATION_INITDIALOG,     ID_TIMER_00,              APPW_JOB_START,          ID_SCREEN_00__APPW_NOTIFICATION_CREATE__ID_TIMER_00__APPW_JOB_START,
  },
  { ID_BUTTON_00,             WM_NOTIFICATION_CLICKED,          0,                        APPW_JOB_NULL,           ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED,
  },
  { ID_BUTTON_02,             WM_NOTIFICATION_CLICKED,          ID_IMAGE_04_frein,        APPW_JOB_SETVIS,         ID_SCREEN_00__ID_BUTTON_02__WM_NOTIFICATION_CLICKED__ID_IMAGE_04_frein__APPW_JOB_SETVIS,
    { ARG_V(APPW_SET_TOGGLE),
    }, 0, NULL
  },
  { ID_BUTTON_03,             WM_NOTIFICATION_CLICKED,          ID_IMAGE_02_feuxposoff,   APPW_JOB_SETVIS,         ID_SCREEN_00__ID_BUTTON_03__WM_NOTIFICATION_CLICKED__ID_IMAGE_02_feuxposoff__APPW_JOB_SETVIS,
    { ARG_V(APPW_SET_TOGGLE),
    }, 0, NULL
  },
  { ID_BUTTON_04,             WM_NOTIFICATION_CLICKED,          ID_IMAGE_03_feuxrouteoff, APPW_JOB_SETVIS,         ID_SCREEN_00__ID_BUTTON_04__WM_NOTIFICATION_CLICKED__ID_IMAGE_03_feuxrouteoff__APPW_JOB_SETVIS,
    { ARG_V(APPW_SET_TOGGLE),
    }, 0, NULL
  },
  { ID_PROGBAR_00,            WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_NULL,           ID_SCREEN_00__ID_PROGBAR_00__WM_NOTIFICATION_VALUE_CHANGED,
  },
  { ID_BUTTON_00,             WM_NOTIFICATION_CLICKED,          0,                        APPW_JOB_NULL,           ID_SCREEN_00__ID_BUTTON_00__WM_NOTIFICATION_CLICKED_0,
  },
  { ID_BUTTON_01,             WM_NOTIFICATION_CLICKED,          0,                        APPW_JOB_NULL,           ID_SCREEN_00__ID_BUTTON_01__WM_NOTIFICATION_CLICKED,
  },
  { ID_TIMER_00,              APPW_NOTIFICATION_TIMER,          0,                        APPW_JOB_NULL,           ID_SCREEN_00__ID_TIMER_00__APPW_NOTIFICATION_TIMER,
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
