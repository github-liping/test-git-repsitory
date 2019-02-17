
//  select board
#define BOARD_NAME 293XX_DEMO

#==========Hikeen Project configure==========
# BOOT_SPI_RRJ_ID
# 
#BOOT_SPI_RRJ_ID = RTD293X_TV036_128_spi_E01 For RTD2936
#BOOT_SPI_RRJ_ID = RTD293X_TV036_216_ddr256MB For RTD2938
#=========Hikeen Project configure===========

#define BOOT_SPI_RRJ_ID RTD293X_TV036_128_spi_E01


#==========Hikeen Board configure==========
# HK_BOARD_ID
# 
#HK_BOARD_ID = HK_T_BOARD2936_E01
#HK_BOARD_ID = HK_T_BOARD2936_V02
#HK_BOARD_ID = HK_T_BOARD2936_E06
#HK_BOARD_ID = HK_T_BOARD2936_P638
#=========Hikeen Board configure===========
#define HK_BOARD_ID HK_T_BOARD2936_P638

#=====Global Macros Define====
#define HK_DISABLE_DEFAULT_AV NO
#define HK_DISABLE_DEFAULT_YPBPR NO
#define HK_DISABLE_DEFAULT_VGA NO
#define HK_ENABLE_LED_BLINK YES
#define CUSTOMER_TREEVIEW   YES

#define HK_ENABLE_DOLBY YES
//#define HIKEEN_UI YES

// PVR ENABLE
#define CONFIG_PVR_ENABLE YES

//  CI Config
#define ENABLE_CI NO

//  choose MHL port
#define CUSTOM_MHL_PORT 0

//  ENABLE CEC
#define USE_CEC YES

// Guide
#define ENABLE_TEXT_READER NO

//  choose ARC port
#define HDMI_ARC_PORT ARC_PORT_HDMI_2

//  select font
#define FONT_FILE_NAME tahoma.ttf

#ifndef __ORDER_H
#define __ORDER_H

#define PARENTAL_CONTROL_FULL
/***Define Custom Key***/
/*
// do not change Kx
#define K0 CMD_KPD_SOURCE // 0x0, 0x0 -          //CMD_POWER 
#define K1 CMD_KPD_UP // 0x20, 0x3f -       //CMD_KPD_UP 
#define K2 CMD_KPD_DOWN // 0x40, 0x5f -     //CMD_KPD_DOWN
#define K3 CMD_KPD_RIGHT // 0x60, 0x7f -   //CMD_KPD_SOURCE  vol_up
#define K4 CMD_KPD_LEFT // 0x80, 0x9f -    //CMD_KPD_RIGHT
#define K5 CMD_KPD_MENU // 0xa0, 0xbf -      //CMD_KPD_LEFT
#define K6 CMD_POWER // 0xc0, 0xdf -     //CMD_KPD_MENU
#define K7 CMD_NOP
#define LOG_PWR  KEY2RANGE(K6)
*/
#define K0 CMD_KPD_SOURCE // 0x0, 0x0 -          //CMD_POWER 
#define K1 CMD_KPD_UP // 0x20, 0x3f -       //CMD_KPD_UP 
#define K2 CMD_KPD_RIGHT // 0x40, 0x5f -     //CMD_KPD_DOWN
#define K3 CMD_KPD_LEFT // 0x60, 0x7f -   //CMD_KPD_SOURCE  vol_up
#define K4 CMD_KPD_MENU // 0x80, 0x9f -    //CMD_KPD_RIGHT
#define K5 CMD_KPD_DOWN // 0xa0, 0xbf -      //CMD_KPD_LEFT
#define K6 CMD_POWER // 0xc0, 0xdf -     //CMD_KPD_MENU
#define K7 CMD_NOP
#define LOG_PWR  KEY2RANGE(K6)
/* Define BackLight Value */

//#define ENABLE_OSD_LAN_ENGLISH
//#define ENABLE_OSD_LAN_SPANISH
//#define ENABLE_OSD_LAN_PORTUGUESE
//#define ENABLE_OSD_LAN_FRENCH
//#define ENABLE_OSD_LAN_GERMAN
//#define ENABLE_OSD_LAN_ITALIAN
//#define ENABLE_OSD_LAN_RUSSIAN
//#define ENABLE_OSD_LAN_CHINESE
//#define ENABLE_OSD_LAN_JAPANESE
//#define ENABLE_OSD_LAN_KOREAN
//#define ENABLE_OSD_LAN_DUTCH
//#define ENABLE_OSD_LAN_SCHINESE
//#define ENABLE_OSD_LAN_THAI
//#define ENABLE_OSD_LAN_ARABIC
//#define ENABLE_OSD_LAN_HEBREW
//#define ENABLE_OSD_LAN_VIETNAMESE
//#define ENABLE_OSD_LAN_MALAY
//#define ENABLE_OSD_LAN_PERSIAN
//#define ENABLE_OSD_LAN_INDONESIAN
//#define ENABLE_OSD_LAN_GAELIC
//#define ENABLE_OSD_LAN_GREEK
//#define ENABLE_OSD_LAN_UKRAINIAN
//#define ENABLE_OSD_LAN_HUNGAARY
//#define ENABLE_OSD_LAN_ROMANIAN
//#define ENABLE_OSD_LAN_ESTONIAN
//#define ENABLE_OSD_LAN_LATVIAN
//#define ENABLE_OSD_LAN_SLOVENIAN
//#define ENABLE_OSD_LAN_TURKISH
//#define ENABLE_OSD_LAN_POLISH
//#define ENABLE_OSD_LAN_CZECH
//#define ENABLE_OSD_LAN_SLOVAKIAN
//#define ENABLE_OSD_LAN_NORWEGIAN
//#define ENABLE_OSD_LAN_LITHUANIAN
//#define ENABLE_OSD_LANG_BULGARIA
//#define ENABLE_OSD_LANG_SERBIA
//#define ENABLE_OSD_LANG_LAOS
//#define ENABLE_OSD_LANG_MONGOLIAN
//#define ENABLE_OSD_LANG_CAMBODIAN
//#define ENABLE_OSD_LANG_NEPALI

/*******************************************************************/
// config Start
// Language
#define ENABLE_OSD_LAN_THAI
#define ENABLE_OSD_LAN_ENGLISH
//#define ENABLE_OSD_LAN_ARABIC
//#define ENABLE_OSD_LAN_FRENCH
//#define ENABLE_OSD_LAN_PERSIAN
//#define ENABLE_OSD_LAN_SPANISH
//#define ENABLE_OSD_LAN_PORTUGUESE




// Subtitle
#define TEXT_LANG	1

//The sound curve
//HK_SOUND_T_BOARD2936_E01
//HK_SOUND_T_BOARD2936_E06
//HK_SOUND_T_BOARD2936_V02
//HK_SOUND_T_BOARD2936_P638
#define HK_SOUND_T_BOARD2936_P638


#define New_Parental_Level_For_Thai
// Area
#define   AREA_THAILAND



//ENABLE_AL_AD_SELECTOR_LIST ues for TREEVIEW 
#define ENABLE_AL_AD_SELECTOR_LIST
#define CONFIG_HKFAC_AUTOTEST

//disable dvb_c
#define DISABLE_DVB_C


//disable uart
#define HK_DISABLE_UART_DEFAULT 

//#define BULE_SCREEN_OFF


//add 16:9 ratio which used on 4:3 screen to instead 4:3 ratio
//#define ENABLE_16X9_INSTEAD_4X3_RATIO

#define HOMEORSTORE   0
#define STORE_VAL     100
#define HOME_VAL     80
#define HK_ENBALE_HOTEL_MODE  SET_OFF

#define HK_ENABLE_HDMI13_SWAP
#define CUSTOM_TREEVIEW

//Atv default
#define CUSTOM_VIDEO_SYSTEM	RT_COLOR_STD_PAL_I
#define CUSTOM_AUDIO_SYSTEM	RT_ATV_SOUND_SYSTEM_BG

#endif /* __ORDER_H */
