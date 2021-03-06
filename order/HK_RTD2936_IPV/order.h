
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
#define HK_BOARD_ID HK_T_BOARD2936_P638

#=====Global Macros Define====
#define HK_DISABLE_DEFAULT_AV NO
#define HK_DISABLE_DEFAULT_YPBPR NO
#define HK_BOARD_SCART_INSTEAD_AV NO
#define HK_DISABLE_DEFAULT_VGA NO

#define HK_ENABLE_LED_BLINK YES
#define HIkeen_Switch_ScreenBlue NO
#define CONFIG_REMEMBER_MUTE_STATUS NO
#define HK_ENABLE_HDMI13_SWAP NO

// Uart on/off
#define HK_DISABLE_UART_DEFAULT YES

#define ENABLE_POWER_KEY_EXIT_BURNMODE

#=========Energy Mode======
#define ENABLE_ENERGY_MODE NO
//  CI Config
#define ENABLE_CI NO

//  choose MHL port
#define CUSTOM_MHL_PORT 0

//  Enable autocolor
#define DISABLE_AUTO_COLOR NO
//  ENABLE CEC
#define USE_CEC YES

//  choose ARC port
#define HDMI_ARC_PORT ARC_PORT_HDMI_2

//  select font
#define FONT_FILE_NAME zhjp.ttf

#ifndef __ORDER_H
#define __ORDER_H

#define PLAY_DTV_AFT_SCANALL
#define PARENTAL_CONTROL_FULL
/***Define Custom Key***/


/* keypad voltage define K0 */
/* #define KPD_VOLTAGE_MIN_K0 (2.5)//193 ok
#define KPD_VOLTAGE_MAX_K0 (3.0)//231.81 */

/* keypad voltage define K1 */
/* #define KPD_VOLTAGE_MIN_K1 (0.5)//38 ok
#define KPD_VOLTAGE_MAX_K1 (0.8)//61 */

/* keypad voltage define K2 */
/* #define KPD_VOLTAGE_MIN_K2 (1.2)//92 ok
#define KPD_VOLTAGE_MAX_K2 (1.6)//123.632
 */

/* keypad voltage define K3 */
/* #define KPD_VOLTAGE_MIN_K3 (1.6)//123//ok
#define KPD_VOLTAGE_MAX_K3 (2.0)//169 */

/* keypad voltage define K4 */
/* #define KPD_VOLTAGE_MIN_K4 (2.0)//169
#define KPD_VOLTAGE_MAX_K4 (2.5)//193 */

/* keypad voltage define K5 */
/* #define KPD_VOLTAGE_MIN_K5 (0.8)//61 ok
#define KPD_VOLTAGE_MAX_K5 (1.2)//92.724 */


/* keypad voltage define K6 */
/* #define KPD_VOLTAGE_MIN_K6 (0)//0
#define KPD_VOLTAGE_MAX_K6 (0.5)//38
 */
/* keypad voltage define K7 */

/* #define KPD_VOLTAGE_MIN_K7 (3.0)
#define KPD_VOLTAGE_MAX_K7 (3.2) */


// do not change Kx
#define K0 CMD_KPD_DOWN   // 0x0, 0x0
#define K1 CMD_KPD_UP    // 0x20, 0x3f
#define K2 CMD_KPD_RIGHT// 0x40, 0x5f
#define K3 CMD_KPD_MENU  // 0x60, 0x7f
#define K4 CMD_POWER // 0x80, 0x9f
#define K5 CMD_KPD_LEFT // 0xa0, 0xbf
#define K6 CMD_KPD_SOURCE // 0xc0, 0xdf
#define K7 CMD_NOP
#define LOG_PWR  KEY2RANGE(K4)

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
#define ENABLE_OSD_LAN_MALAY
#define ENABLE_OSD_LAN_VIETNAMESE
#define ENABLE_OSD_LANG_BURMESE
#define ENABLE_OSD_LAN_INDONESIAN
#define ENABLE_OSD_LAN_TURKISH
#define ENABLE_OSD_LAN_PERSIAN

#define ENABLE_OSD_LANG_LAOS
#define ENABLE_OSD_LANG_MONGOLIAN
#define ENABLE_OSD_LANG_CAMBODIAN
// Subtitle
#define TEXT_LANG	1

//The sound curve
//HK_SOUND_T_BOARD2936_E01
//HK_SOUND_T_BOARD2936_E06
//HK_SOUND_T_BOARD2936_V02
//HK_SOUND_T_BOARD2936_P638
//HK_SOUND_T_BOARD2936_P531
#define HK_SOUND_T_BOARD2936_P638

// Area
#define   AREA_THAILAND_WITH_ENGLISH

#define HOMEORSTORE   0
#define STORE_VAL     0
#define HOME_VAL      80
#define HK_ENBALE_HOTEL_MODE  SET_OFF


//#define DISABLE_DVB_C
//#define DISABLE_HK_SPDIF

//#define BULE_SCREEN_OFF

#define ENABLE_SUPPORT_NTSC_M


//Atv default
#define CUSTOM_VIDEO_SYSTEM	RT_COLOR_STD_PAL_I
#define CUSTOM_AUDIO_SYSTEM	RT_ATV_SOUND_SYSTEM_BG

//text 
#define TEXT_LANG   1
#endif /* __ORDER_H */
