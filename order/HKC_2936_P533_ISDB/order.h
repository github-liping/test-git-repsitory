
//  select board
#define BOARD_NAME 293XX_DEMO

#==========Hikeen Project configure==========
# BOOT_SPI_RRJ_ID
# 
#BOOT_SPI_RRJ_ID = RTD293X_TV036_128_spi_E01 For RTD2936
#BOOT_SPI_RRJ_ID = RTD293X_TV036_216_ddr256MB For RTD2938
#=========Hikeen Project configure===========

#define BOOT_SPI_RRJ_ID RTD293X_TV036_128_spi_E01


#==========Hikeen DTV Ststem configure==========
# DTV_SYSTEM
# 
#DTV_SYSTEM = DVB_SYSTEM For DVB-T/C/T2
#DTV_SYSTEM = ISDB_SYSTEM For ISDB-T
#=========Hikeen Project configure===========

#define DTV_SYSTEM ISDB_SYSTEM


#==========Hikeen Board configure==========
# HK_BOARD_ID
# 
#HK_BOARD_ID = HK_T_BOARD2936_E01
#HK_BOARD_ID = HK_T_BOARD2936_V02
#HK_BOARD_ID = HK_T_BOARD2936_E06
#HK_BOARD_ID = HK_T_BOARD2936_P531
#=========Hikeen Board configure===========
#define HK_BOARD_ID HK_T_BOARD2936_P533

#=====Global Macros Define====
#define HK_DISABLE_DEFAULT_AV NO
#define HK_DISABLE_DEFAULT_YPBPR YES
#define HK_DISABLE_DEFAULT_VGA YES
#define HK_ENABLE_LED_BLINK YES
#define ENABLE_TEXT_READER YES
//#define HIKEEN_UI YES
#define ENABLE_RT_FACTORY_AUTO_TEST YES
#define HK_DISABLE_UART_DEFAULT NO
#define CONFIG_PVR_ENABLE NO
#define ENABLE_INSTALL_GUIDE YES

//  CI Config
#define ENABLE_CI NO

//  choose MHL port
#define CUSTOM_MHL_PORT 0

//  ENABLE CEC
#define USE_CEC YES

//  choose ARC port
#define HDMI_ARC_PORT ARC_PORT_HDMI_2

//  select font
#define FONT_FILE_NAME zhjp.ttf

#ifndef __ORDER_H
#define __ORDER_H

/***Define Custom Key***/
// do not change Kx


#define K0 CMD_POWER
#define LOG_PWR  KEY2RANGE(K0)



/* Define BackLight Value */

/*******************************************************************/
// config Start
// Language
#define ENABLE_OSD_LAN_ENGLISH
//#define ENABLE_OSD_LAN_SPANISH
#define ENABLE_OSD_LAN_PORTUGUESE

// Subtitle
#define TEXT_LANG	1

//The sound curve
//HK_SOUND_T_BOARD2936_E01
//HK_SOUND_T_BOARD2936_E06
//HK_SOUND_T_BOARD2936_V02
//HK_SOUND_T_BOARD2936_P638
//HK_SOUND_T_BOARD2936_P531
#define HK_SOUND_T_BOARD2936_P533

#define ENABLE_ONE_KEY

#define HOMEORSTORE   0
#define STORE_VAL     0
#define HOME_VAL     20
#define HK_ENBALE_HOTEL_MODE  SET_OFF

//Atv default
#define CUSTOM_VIDEO_SYSTEM	RT_COLOR_STD_PAL_I
#define CUSTOM_AUDIO_SYSTEM	RT_ATV_SOUND_SYSTEM_BG

#endif /* __ORDER_H */
