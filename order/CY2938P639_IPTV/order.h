
//  select board
#define BOARD_NAME 293XX_DEMO

#==========Hikeen Project configure==========
# BOOT_SPI_RRJ_ID
# 
#BOOT_SPI_RRJ_ID = RTD293X_TV036_128_spi_E01 For RTD2936
#BOOT_SPI_RRJ_ID = RTD293X_TV036_216_ddr256MB For RTD2938
#=========Hikeen Project configure===========

#define BOOT_SPI_RRJ_ID RTD293X_TV036_216_ddr256MB


#==========Hikeen Board configure==========
# HK_BOARD_ID
# 
#HK_BOARD_ID = HK_T_BOARD2938_P531
#HK_BOARD_ID = HK_T_BOARD2938_P637
#HK_BOARD_ID = HK_T_BOARD2938_P639
#HK_BOARD_ID = HK_T_BOARD2938_P838
#=========Hikeen Board configure===========
#define HK_BOARD_ID HK_T_BOARD2938_P639

#=====Global Macros Define====
#define HK_DISABLE_DEFAULT_AV NO
#define HK_DISABLE_DEFAULT_SCART YES
#define HK_DISABLE_DEFAULT_YPBPR YES
#define HK_DISABLE_DEFAULT_VGA NO
#define HK_ENABLE_LED_BLINK YES
#define HK_ENABLE_DOLBY NO
#define BULE_SCREEN_OFF YES
#define ENABLE_BOOKMARK YES
#define CONFIG_CH_FIVEKEY NO
#define CUSTOMER_CHAOYE YES
#define HK_ENABLE_HDMI13_SWAP NO
#define HIKEEN_UI NO
//#define HIKEEN_ENABLE_RESET_WITHOUT_ERASE_CHANNEL YES

// PVR ENABLE
#define CONFIG_PVR_ENABLE YES
//  CI Config
#define ENABLE_CI YES

//  choose MHL port
// #define CUSTOM_MHL_PORT 0

//  ENABLE CEC
#define USE_CEC YES

//  choose ARC port
#define HDMI_ARC_PORT ARC_PORT_HDMI_2

//  select font
#define FONT_FILE_NAME arial.ttf

#define HK_SUPPORT_IPTV YES

// Guide
#define ENABLE_TEXT_READER NO


#ifndef __ORDER_H
#define __ORDER_H

/***Define Custom Key***/
// do not change Kx
//#define VIDEOCON YES
#ifdef VIDEOCON
#define K0 CMD_KPD_SOURCE // 0x0, 0x0 
#define K1 CMD_KPD_UP // 0x20, 0x3f 
#define K2 CMD_KPD_DOWN // 0x40, 0x5f 
#define K3 CMD_KPD_MENU// 0x60, 0x7f 
#define K4 CMD_POWER//CMD_KPD_LEFT // 0x80, 0x9f 
#define K5 CMD_KPD_RIGHT//CMD_KPD_MENU // 0xa0, 0xbf 
#define K6 CMD_KPD_LEFT//CMD_POWER // 0xc0, 0xdf 
#define K7 CMD_NOP 
#define LOG_PWR  KEY2RANGE(K4)
#else
/*朝野KEY*/
#define K0 CMD_KPD_MENU // 0x0, 0x0 
#define K1 CMD_KPD_DOWN // 0x20, 0x3f 
#define K2 CMD_KPD_UP // 0x40, 0x5f 
#define K3 CMD_KPD_SOURCE // 0x60, 0x7f 
#define K4 CMD_POWER//CMD_KPD_LEFT // 0x80, 0x9f 
#define K5 CMD_KPD_LEFT//CMD_KPD_MENU // 0xa0, 0xbf 
#define K6 CMD_KPD_RIGHT//CMD_POWER // 0xc0, 0xdf 
#define K7 CMD_NOP 
#define LOG_PWR  KEY2RANGE(K4)
#endif
/*****************************************/
#if 0	//zhjp
#define K0 CMD_KPD_SOURCE // 0x0, 0x0 
#define K1 CMD_KPD_UP // 0x20, 0x3f 
#define K2 CMD_KPD_DOWN // 0x40, 0x5f 
#define K3 CMD_KPD_RIGHT // 0x60, 0x7f 
#define K4 CMD_POWER//CMD_KPD_LEFT // 0x80, 0x9f 
#define K5 CMD_KPD_LEFT//CMD_KPD_MENU // 0xa0, 0xbf 
#define K6 CMD_KPD_MENU//CMD_POWER // 0xc0, 0xdf 
#define K7 CMD_NOP 
#define LOG_PWR  KEY2RANGE(K4)

#define K0 CMD_POWER // 0x0, 0x0
#define K1 CMD_KPD_DOWN // 0x20, 0x3f
#define K2 CMD_KPD_UP // 0x40, 0x5f
#define K3 CMD_KPD_LEFT // 0x60, 0x7f
#define K4 CMD_KPD_MENU // 0x80, 0x9f
#define K5 CMD_KPD_RIGHT // 0xa0, 0xbf
#define K6 CMD_KPD_SOURCE // 0xc0, 0xdf
#define K7 CMD_NOP
#define LOG_PWR  KEY2RANGE(K0)
#endif
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
#if 0
#define ENABLE_OSD_LAN_FRENCH
#define ENABLE_OSD_LAN_GERMAN
#define ENABLE_OSD_LAN_RUSSIAN
//#define ENABLE_OSD_LAN_ARABIC
#define ENABLE_OSD_LAN_ENGLISH
#define ENABLE_OSD_LAN_PERSIAN
#define ENABLE_OSD_LAN_SPANISH
#define ENABLE_OSD_LAN_PORTUGUESE
#else
//#define ENABLE_OSD_LAN_VIETNAMESE
#define ENABLE_OSD_LAN_ENGLISH	
#define ENABLE_OSD_LAN_FRENCH
#define ENABLE_OSD_LAN_GERMAN
#define ENABLE_OSD_LAN_RUSSIAN
#define ENABLE_OSD_LAN_ARABIC
#endif
// Subtitle
#define TEXT_LANG	0

//The sound curve
//HK_SOUND_T_BOARD2936_E01
//HK_SOUND_T_BOARD2936_E06
//HK_SOUND_T_BOARD2936_V02
//HK_SOUND_T_BOARD2936_P638
//#define HK_SOUND_T_BOARD2936_P531
#define HK_SOUND_T_BOARD2936_P638

#define HIKEEN_ENABLE_RESET_WITHOUT_ERASE_CHANNEL

// Area
#define   AREA_INDIA_WITH_ENGLISH

//Parental Control
#define PARENTAL_CONTROL_FULL

// Backlight current function define 
#define DUTY_RANGE {0,100}

#define CONFIG_SPEC_FUNCTION
#define CONFIG_WIFI_SSID "changhong-roku"
#define CONFIG_WIFI_SECURITY WL_SECURITY_OPEN
#define CONFIG_WIFI_PSWD ""

#define CONFIG_KPD_ADC_COUNT 2

#define LSADCPORT0 RTD293X_QFP216_PIN_200_LSADC_VOLTAGE_7
#define LSADCPORT1 RTD293X_QFP216_PIN_199_LSADC_VOLTAGE_6

#define HOMEORSTORE   0
#define STORE_VAL    100
#define HOME_VAL     100
#define HK_ENBALE_HOTEL_MODE  SET_OFF

//Atv default
#define CUSTOM_VIDEO_SYSTEM	RT_COLOR_STD_PAL_I
#define CUSTOM_AUDIO_SYSTEM	RT_ATV_SOUND_SYSTEM_BG

#define ENABLE_EQ_TO_OSD YES
//#define CHAOYE_SOUND_SPEAKER_8OHM_5W
//#define CHAOYE_3938P838_SOUND_SPEAKER_8OHM_8W
#endif /* __ORDER_H */
