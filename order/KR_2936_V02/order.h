
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
#HK_BOARD_ID = HK_T_BOARD2936_E03
#HK_BOARD_ID = HK_T_BOARD2936_E06
#HK_BOARD_ID = HK_T_BOARD2936_P530
#HK_BOARD_ID = HK_T_BOARD2936_P531
#HK_BOARD_ID = HK_T_BOARD2936_P561
#HK_BOARD_ID = HK_T_BOARD2936_P638
#HK_BOARD_ID = HK_T_BOARD2936_P838
#=========Hikeen Board configure===========
#define HK_BOARD_ID HK_T_BOARD2936_V02

#=====Global Macros Define====
#define HK_DISABLE_DEFAULT_AV NO
#define HK_DISABLE_DEFAULT_YPBPR NO
#define HK_BOARD_SCART_INSTEAD_AV NO
#define HK_DISABLE_DEFAULT_VGA NO

#define HK_ENABLE_LED_BLINK YES
#define HIkeen_Switch_ScreenBlue NO
#define CONFIG_REMEMBER_MUTE_STATUS NO
#define HK_ENABLE_HDMI13_SWAP NO
#define HK_BOARD_DISABLE_USB YES
#define HK_ENABLE_DOLBY YES



#define ENABLE_RT_FACTORY_AUTO_TEST YES
#define ENABLE_Cus_FACTORY_TEST_Mode YES

// Uart on/off
#define HK_DISABLE_UART_DEFAULT YES

#define ENABLE_POWER_KEY_EXIT_BURNMODE

#=========Energy Mode======
#define ENABLE_ENERGY_MODE NO
#define HK_IRBUTTON_SHOW_OK NO
#define HK_IRBUTTON_SHOW_DISPLAY NO
//  CI Config
#define ENABLE_CI NO

//  choose MHL port
#define CUSTOM_MHL_PORT 0

//  Enable autocolor
#define DISABLE_AUTO_COLOR NO
//  ENABLE CEC
#define USE_CEC YES
// Guide
#define ENABLE_TEXT_READER NO

//  choose ARC port
#define HDMI_ARC_PORT ARC_PORT_HDMI_2

//  select font
#define FONT_FILE_NAME zhjp.ttf

#ifndef __ORDER_H
#define __ORDER_H

#define PLAY_DTV_AFT_SCANALL
#define PARENTAL_CONTROL_FULL
/***Define Custom Key***/
// do not change Kx
#define K0 CMD_KPD_SOURCE // 0x0, 0x0
#define K1 CMD_KPD_UP // 0x20, 0x3f
#define K2 CMD_KPD_DOWN // 0x40, 0x5f
#define K3 CMD_KPD_RIGHT // 0x60, 0x7f
#define K4 CMD_KPD_LEFT // 0x80, 0x9f
#define K5 CMD_KPD_MENU // 0xa0, 0xbf
#define K6 CMD_POWER // 0xc0, 0xdf
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

#define ENABLE_OSD_LAN_ENGLISH
#define ENABLE_OSD_LAN_FRENCH
#define ENABLE_OSD_LAN_SPANISH


// Subtitle
#define TEXT_LANG	1

//The sound curve
//HK_SOUND_T_BOARD2936_E01
//HK_SOUND_T_BOARD2936_E06
//HK_SOUND_T_BOARD2936_V02
//HK_SOUND_T_BOARD2936_P638
//HK_SOUND_T_BOARD2936_P531
#define HK_SOUND_T_BOARD2936_V02

// Area
#define   	AREA_AUSTRALIA

#define disable_output_show
#define	KR_Power_on_Standby
#define HOMEORSTORE   0
#define STORE_VAL     0
#define HOME_VAL      80
#define HK_ENBALE_HOTEL_MODE  SET_OFF
#define HOTELM_OSD_SHOW  

//#define DISABLE_DVB_C
//#define DISABLE_HK_SPDIF

#define BULE_SCREEN_OFF

#define ENABLE_SUPPORT_NTSC_M


//Atv default
#define CUSTOM_VIDEO_SYSTEM	RT_COLOR_STD_PAL_I
#define CUSTOM_AUDIO_SYSTEM	RT_ATV_SOUND_SYSTEM_BG

//text 
#define TEXT_LANG   1
#endif /* __ORDER_H */
