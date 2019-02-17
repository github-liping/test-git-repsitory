#ifndef __PANEL_API_H__
#define __PANEL_API_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <rtd_types.h>
#include <Platform_Lib/panel/panel.h>
#include <Platform_Lib/panel/panelConfigParameter.h>

extern UINT32 LVDS_4_PORT_MAPPING_TABLE[24];

void Panel_InitParameter(PANEL_CONFIG_PARAMETER *parameter);

#ifdef ENABLE_FACTORY_PARTITION
bool Panel_GetDefaultParameter(PANEL_CONFIG_PARAMETER *parameter);
PANEL_CONFIG_PARAMETER* Panel_GetPanelConfigParameter();
#endif

//#ifdef ENABLE_FACTORY_PANEL_SETTING
//void Panel_SyncDefaultParameter();
//PANEL_CONFIG_PARAMETER* Panel_GetPanelConfigParameter();
//#endif

#if defined(SUPPORT_RDA_RADIO)
void setRadioControlFlag();
void clrRadioControlFlag();
bool getRadioControlFlag();

#endif

unsigned int Get_DISPLAY_PORT() ;

unsigned int Get_DISPLAY_COLOR_BITS();

unsigned int Get_DISPLAY_EVEN_RSV1_BIT();

unsigned int Get_DISPLAY_ODD_RSV1_BIT();

unsigned int Get_DISPLAY_BITMAPPING_TABLE();


unsigned int Get_DISPLAY_PORTAB_SWAP() ;

unsigned int Get_DISPLAY_RED_BLUE_SWAP();

unsigned int Get_DISPLAY_MSB_LSB_SWAP();

unsigned int Get_DISPLAY_SKEW_DATA_OUTPUT();

#if defined(BOARD_ID_RTD2644I_TV008_2_EPR1_64M)
#ifdef ENABLE_AP_INIT_PANEL
void AP_setPanelDataSetting(void);
#endif // ENABLE_AP_INIT_PANEL
#endif //defined(BOARD_ID_RTD2644I_TV008_2_EPR1_64M)

#if defined(BUILD_TV036_1_DVB) || defined(BUILD_TV020_1_DTMB) || defined(TV003_ADTV) ||(defined(TV032_1) && (defined(UI_STYLE_IPTV) || defined(UI_STYLE_PUBLIC)|| defined(UI_STYLE_THTF_IPTV)|| defined(UI_STYLE_THTF_NEW)))
unsigned char Panel_TurnOn_Backlight(void);
unsigned char Panel_TurnOff_Backlight(void);
#endif

unsigned int Get_DISPLAY_OUTPUT_INVERSE();
unsigned int Get_DISPLAY_LVDS_PN_SWAP();

//unsigned int Get_DISPLAY_CLOCK_DELAY();

unsigned int Get_DISPLAY_VERTICAL_SYNC_NORMAL() ;

unsigned int Get_DISPLAY_HORIZONTAL_SYNC_NORMAL() ;

unsigned int Get_DISPLAY_RATIO_4X3();
unsigned int Get_DISPLAY_CLOCK_INVERSE();
unsigned int Get_DISPLAY_CLOCK_MAX() ;
unsigned int Get_DISPLAY_CLOCK_MIN();

unsigned int Get_DISPLAY_REFRESH_RATE() ;
unsigned int Get_DISPLAY_CLOCK_TYPICAL();

unsigned int Get_DISP_HORIZONTAL_TOTAL() ;


unsigned int Get_DISP_VERTICAL_TOTAL();


unsigned int Get_DISP_HSYNC_WIDTH() ;

unsigned int Get_DISP_VSYNC_LENGTH();

unsigned int Get_DISP_DEN_STA_HPOS() ;
unsigned int Get_DISP_DEN_END_HPOS();
unsigned int Get_DISP_DEN_STA_VPOS() ;

unsigned int Get_DISP_DEN_END_VPOS() ;



/*
 * Display active window setup
 */
unsigned int Get_DISP_ACT_STA_HPOS() ;

unsigned int Get_DISP_ACT_END_HPOS_PRE();

unsigned int Get_DISP_ACT_END_HPOS() ;

unsigned int Get_DISP_ACT_STA_VPOS() ;
unsigned int Get_DISP_ACT_END_VPOS() ;

unsigned int Get_DISP_HSYNC_LASTLINE() ;

unsigned int Get_DISP_DCLK_DELAY() ;


unsigned int Get_DISP_ACT_STA_BIOS();

unsigned int Get_DEFAULT_DPLL_M_DIVIDER()	;

unsigned int Get_DEFAULT_DPLL_N_DIVIDER()	;

unsigned int Get_DISPLAY_CLOCK_TYPICAL();

unsigned int Get_PANEL_TO_LVDS_ON_ms();


unsigned int Get_LVDS_TO_LIGHT_ON_ms();


unsigned int Get_LIGHT_TO_LDVS_OFF_ms();


unsigned int Get_LVDS_TO_PANEL_OFF_ms();


unsigned int Get_PANEL_OFF_TO_ON_ms();

unsigned int Get_PANEL_FIX_LAST_LINE_ENABLE();
unsigned int Get_PANEL_FIX_LAST_LINE_4X_ENABLE();
unsigned char Get_PANEL_VFLIP_ENABLE();
unsigned char Get_PANEL_PICASSO_ENABLE();
unsigned char Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE();
unsigned char Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE();
unsigned char Get_PANEL_3D_PR_OUTPUT_LR_SWAP();
unsigned char Get_PANEL_3D_SG_OUTPUT_120HZ_ENABLE();
unsigned char Get_PANEL_3D_SG_24HZ_OUTPUT_FHD_ENABLE();
unsigned char Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE();
unsigned char Set_PANEL_3D_PIN(int enable);
unsigned char Get_PANEL_3D_PANEL_TYPE(void);
unsigned int Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MIN();
unsigned int Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MAX();
unsigned int Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MIN();
unsigned int Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MAX();

unsigned char Get_PANEL_3D_PR_TO_SG_OUTPUT_FRC_ENABLE(void); // sync from Magellan to sovle shaking issue
unsigned int Get_DISPLAY_PANEL_SG_3D_IR_INDEX();

unsigned char Get_OD_MODE();
unsigned char Get_OD_GAIN();
unsigned char Get_OD_BITMODE();
unsigned char Get_OD_COMP_MODE();
unsigned char Get_OD_ENABEL();
unsigned int Get_DISPLAY_PANEL_TYPE();

//	backlight API

typedef enum _BACKLIGHT_MODE{
	BACKLIGHT_USER,
	BACKLIGHT_DCR,
	BACKLIGHT_OPC,
}BACKLIGHT_MODE;

typedef enum _DISPLAY_SR_MODE{
	SR_H2_V2=0,
	SR_H1_V2,
	SR_H2_V1,
	SR_BYPASS,
}DISPLAY_SR_MODE;

typedef enum _DISPLAY_PIXEL_MODE{
	PIXEL_MODE_1_PIXEL=0,
	PIXEL_MODE_2_PIXEL,
	PIXEL_MODE_4_PIXEL,
}DISPLAY_PIXEL_MODE;

typedef enum {
	P_LVDS_2K1K,	//VDS output 2k1k timing only
	P_VBY1_4K2K,	//V By 1	 output 4k2k timing only
	P_LVDS_4K_2K,	//LVDS output 4k2k and 2k1k timing
	P_EPI_TYPE,
	P_LVDS_TO_HDMI,
	P_RESERVED
}PANEL_TYPE;

unsigned char Panel_SetBackLightMode(unsigned char enable);
unsigned char Panel_SetBackLightLevel(BACKLIGHT_MODE mode,unsigned int level);
unsigned int Panel_GetBackLightLevel(); // yf 20110704

unsigned char Panel_SetPWMLevel(BACKLIGHT_MODE mode,unsigned int level);//should set to BACKLIGHT_USER//TPV_XM sheng 20130524

/**
 * Panel_SetBackLightRange
 * mapping uiMax to actMax,uiMin to actMin,and use uiStep as step size when use Panel_SetBackLightLevel
 *
 * @param {uiMax : 0~255,default 100}
 * @param {uiMin : 0~255,default 0}
 * @param {uiMax : 0~255,default 255}
 * @param {uiMin : 0~255,default 0}
 * @return {TRUE/FALSE }
 *
 */
unsigned char Panel_SetBackLightMappingRange(unsigned int uiMax,unsigned int uiMin,unsigned int actMax,unsigned int actMin, unsigned char increaseMode);

#if defined(TV032_1)//czl,20131116,sync from 2947
unsigned int Get_PANEL_BACKLIGHT_PWM_FREQ(void);	//zhang_dc 2012.09.18 add
#if defined(ENABLE_AUTO_MOTION_120HZ)	//yq_zhang 2014.01.13, set i2c to gpio, avoid i2c pull down by memc board and cause system halt
#if defined(MEMC_CHIP_MSTAR6M30) || defined(MEMC_CHIP_ZORAN3920)	//zhang_dc 2014.01.15, for MEMC module with IIC
void Panel_SetI2CEnable(bool bEnable);
#endif
#endif
#endif

void Panel_SetPwmDutyCbFunc(void (*callback)(UINT8 value));
void Panel_InitCbFunc(void (*callback)( void)); // skyworth yf 20111125

unsigned char Panel_TurnOff(void);

unsigned char Panel_TurnOn(void);

typedef enum {
	SG_3D_IR_NO_DEFINED =0,
	SG_3D_IR_PR2SG = 1
}SG_3D_IR_PANEL_INDEX; //SG_3D_IR_PANEL_INDEX;

typedef struct _PANEL_EX_SETTING {
	UINT8 *panelID;
	UINT8 *panelSetFileName;
	UINT8 *panelColorFileName;
}PANEL_EX_SETTING;

typedef struct _PANEL_EX_ALL_SETTING {
	int panelIDcount;
	int currentPanelID;
	PANEL_EX_SETTING *list;
}PANEL_EX_ALL_SETTING;

//USER: Vincent_Lee  DATE: 2012/4/28  TODO: Add TCON for open cell panel
void Panel_Tcon_Init(void);
//USER: Vincent_Lee  DATE_2012_5_18  TODO: Add soft I2C for Gamma IC control (BUF_16821)
void Panel_Gamma_Init(void);
void Panel_SetBackLightBlock(bool YesNo);
UINT8 Panel_LVDS_To_Hdmi_Converter_Parameter(void);
unsigned char Panel_Enable_BLAdjust(void);

typedef unsigned char (*CustomerPanelOnOff)(void); 

void Panel_Register_PanelOnOff(CustomerPanelOnOff PanelOn,CustomerPanelOnOff PanelOff);


#if  (defined BUILD_TV035_1_DTMB)||defined(BUILD_TV020_1_DTMB) || defined(BUILD_TV010_1_DTMB)
unsigned char Panel_SetBackLightLevelFactoryMenu(BACKLIGHT_MODE mode, unsigned int level);
#endif

//==================================
#if defined(BUILD_TV005_1_ISDB)
unsigned char Panel_SetBackLightLevel_Force(BACKLIGHT_MODE mode, unsigned int level);
void Panel_SetBackLightBlockbyPartial(bool YesNo);
#endif
//==================================

#ifdef CONFIG_MULTIPLE_PANEL_SETTING
void Factory_Apply_PanelSetting (void);
void Factory_Save_PanelSetting (const char *panelname);
//const char* Factory_Get_Panelname (void); //move to project,refer to TV005_ADTV_L3450/usbUpdate.h
#endif
#ifdef __cplusplus
}
#endif

#endif // __PANEL_API_H__


