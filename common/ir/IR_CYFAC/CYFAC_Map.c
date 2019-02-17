#include <stdio.h>
#include <Platform_Lib/RemoteControl/RemoteControl.h>
#include <Application/AppClass/setupdef_source_option.h>
#include "CYFAC_Map.h"

typedef	struct _stCYFAC_DTVKeyMAP
{
	int	oriIRKey;
	int	dstIRKey;
} stCYFAC_DTVKeymap;

int stCYFAC_Keymap[0x100] =
{
#if 1
/*0x00, 0x01 ,0x02, 0x03*/	CMD_NINE, CMD_POWER, CMD_ONE, CMD_FIVE,
/*0x04, 0x05 ,0x06, 0x07*/	CMD_DASH, CMD_DISPLAY, CMD_THREE, CMD_SEVEN,
/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_FAC_F1, CMD_USB, CMD_FAC_MANUAL_SEARCHCH, CMD_FAC_BURNMODE,
/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_GOTO_NEXT_SOURCE, CMD_PANEL_HD, CMD_FAC_VERSION_INFO, CMD_PANEL_SD,

/*0x10, 0x11 ,0x12, 0x13*/	CMD_ZERO, CMD_MUTE, CMD_TWO, CMD_SIX,
/*0x14, 0x15 ,0x16, 0x17*/	CMD_POINT, CMD_DVDMENU, CMD_FOUR, CMD_EIGHT,
/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_FAC_MENU, CMD_NOP, CMD_FAC_RESET, CMD_PANEL_SD1440x900,
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_OPTION_BLUE, CMD_OPTION_RED, CMD_OPTION_GREEN, CMD_OPTION_YELLOW,

/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x24, 0x25 ,0x26, 0x27*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x40, 0x41 ,0x42, 0x43*/	CMD_SOURCE, CMD_DVB_T_C_MODE, CMD_NOP, CMD_NOP,
/*0x44, 0x45 ,0x46, 0x47*/	CMD_VOL_UP, CMD_VOL_DOWN, CMD_MENU, CMD_LEFT,
/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_CHANNEL_INC, CMD_CHANNEL_DEC, CMD_EXIT, CMD_RIGHT,
/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_PLAY_PAUSE, CMD_NOP, CMD_EPG, CMD_NOP,

/*0x50, 0x51 ,0x52, 0x53*/	CMD_DOWN, CMD_DISPLAY_RATIO, CMD_NOP, CMD_NOP,
/*0x54, 0x55 ,0x56, 0x57*/	CMD_PC_AUTO_ADJUST, CMD_AUDIO, CMD_UP, CMD_ENTER,
/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_MUTE, CMD_RECORDING, CMD_NOP, CMD_NOP,
/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,


/*0x60, 0x61 ,0x62, 0x63*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x64, 0x65 ,0x66, 0x67*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x68, 0x69 ,0x6a, 0x6b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x6c, 0x6d ,0x6e, 0x6f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x70, 0x71 ,0x72, 0x73*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x74, 0x75 ,0x76, 0x77*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x78, 0x79 ,0x7a, 0x7b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x7c, 0x7d ,0x7e, 0x7f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x80, 0x81 ,0x82, 0x83*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x84, 0x85 ,0x86, 0x87*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x88, 0x89 ,0x8a, 0x8b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x8c, 0x8d ,0x8e, 0x8f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x90, 0x91 ,0x92, 0x93*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x94, 0x95 ,0x96, 0x97*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x98, 0x99 ,0x9a, 0x9b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x9c, 0x9d ,0x9e, 0x9f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xa0, 0xa1 ,0xa2, 0xa3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xa4, 0xa5 ,0xa6, 0xa7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xa8, 0xa9 ,0xaa, 0xab*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xac, 0xad ,0xae, 0xaf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xb0, 0xb1 ,0xb2, 0xb3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xb4, 0xb5 ,0xb6, 0xb7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xb8, 0xb9 ,0xba, 0xbb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xbc, 0xbd ,0xbe, 0xbf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xc0, 0xc1 ,0xc2, 0xc3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xc4, 0xc5 ,0xc6, 0xc7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_ADC,
/*0xc8, 0xc9 ,0xca, 0xcb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xcc, 0xcd ,0xce, 0xcf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xd0, 0xd1 ,0xd2, 0xd3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xd4, 0xd5 ,0xd6, 0xd7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xd8, 0xd9 ,0xda, 0xdb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xdc, 0xdd ,0xde, 0xdf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xe0, 0xe1 ,0xe2, 0xe3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xe4, 0xe5 ,0xe6, 0xe7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xe8, 0xe9 ,0xea, 0xeb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0xec, 0xed ,0xee, 0xef*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xf0, 0xf1 ,0xf2, 0xf3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xf4, 0xf5 ,0xf6, 0xf7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xf8, 0xf9 ,0xfa, 0xfb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0xfc, 0xfd ,0xfe, 0xff*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

#else
	/*0x00, 0x01 ,0x02, 0x03*/	CMD_ZERO, CMD_ONE, CMD_TWO, CMD_THREE,
	/*0x04, 0x05 ,0x06, 0x07*/	CMD_FOUR, CMD_FIVE, CMD_SIX, CMD_SEVEN,
	/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_EIGHT, CMD_NINE, CMD_ENTER, CMD_NOP,
	/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_SOURCE_HDMI, CMD_NOP, CMD_SOURCE_USB, CMD_SOURCE_VGA,

	/*0x10, 0x11 ,0x12, 0x13*/	CMD_M_MODE, CMD_LAN_TEST, CMD_POWER, CMD_NOP,
	/*0x14, 0x15 ,0x16, 0x17*/	CMD_MENU, CMD_PRESET_DTV, CMD_PSET_CUSTOM_DTV, CMD_APP,
	/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_SOURCE_AV, CMD_UP, CMD_VOL_UP_15, CMD_CHANNEL_INC,
	/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_SOURCE_ATV, CMD_DOWN, CMD_VOL_DOWN_15, CMD_CHANNEL_DEC,

	/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_FAC_BURNMODE, CMD_EXPORT_DTV, CMD_FAC_VERSION_INFO,
	/*0x24, 0x25 ,0x26, 0x27*/	CMD_DATA_SELF_CHECK, CMD_USB_UPGRADE, CMD_ARC_CEC, CMD_OSD_RESET,
	/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_WHITE_BALANCE, CMD_NOP, CMD_SOURCE_DTV, CMD_NOP,
	/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0x40, 0x41 ,0x42, 0x43*/	CMD_SOURCE, CMD_CI_INFO, CMD_NOP, CMD_BRIGHTEST,
	/*0x44, 0x45 ,0x46, 0x47*/	CMD_DVB_T_C_MODE, CMD_FAC_RESET, CMD_LEFT, CMD_RIGHT,
	/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_EXIT, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_NOP, CMD_AUDIO_BALANCE, CMD_NOP, CMD_NOP,

	/*0x50, 0x51 ,0x52, 0x53*/	CMD_NOP, CMD_NOP, CMD_ADC, CMD_WIFI_TEST,
	/*0x54, 0x55 ,0x56, 0x57*/	CMD_FAC_MANUAL_SEARCHCH, CMD_SOURCE_SCART, CMD_NOP, CMD_NOP,
	/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_MUTE, CMD_NOP, CMD_S_MODE, CMD_NOP,
	/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_QR_CODE, CMD_SOURCE_YPBPR, CMD_NOP, CMD_NOP,


	/*0x60, 0x61 ,0x62, 0x63*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x64, 0x65 ,0x66, 0x67*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x68, 0x69 ,0x6a, 0x6b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x6c, 0x6d ,0x6e, 0x6f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0x70, 0x71 ,0x72, 0x73*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x74, 0x75 ,0x76, 0x77*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x78, 0x79 ,0x7a, 0x7b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x7c, 0x7d ,0x7e, 0x7f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0x80, 0x81 ,0x82, 0x83*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x84, 0x85 ,0x86, 0x87*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x88, 0x89 ,0x8a, 0x8b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x8c, 0x8d ,0x8e, 0x8f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0x90, 0x91 ,0x92, 0x93*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x94, 0x95 ,0x96, 0x97*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x98, 0x99 ,0x9a, 0x9b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0x9c, 0x9d ,0x9e, 0x9f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xa0, 0xa1 ,0xa2, 0xa3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xa4, 0xa5 ,0xa6, 0xa7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xa8, 0xa9 ,0xaa, 0xab*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xac, 0xad ,0xae, 0xaf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xb0, 0xb1 ,0xb2, 0xb3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xb4, 0xb5 ,0xb6, 0xb7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xb8, 0xb9 ,0xba, 0xbb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xbc, 0xbd ,0xbe, 0xbf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xc0, 0xc1 ,0xc2, 0xc3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xc4, 0xc5 ,0xc6, 0xc7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_ADC,
	/*0xc8, 0xc9 ,0xca, 0xcb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xcc, 0xcd ,0xce, 0xcf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xd0, 0xd1 ,0xd2, 0xd3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xd4, 0xd5 ,0xd6, 0xd7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xd8, 0xd9 ,0xda, 0xdb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xdc, 0xdd ,0xde, 0xdf*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xe0, 0xe1 ,0xe2, 0xe3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xe4, 0xe5 ,0xe6, 0xe7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xe8, 0xe9 ,0xea, 0xeb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

	/*0xec, 0xed ,0xee, 0xef*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xf0, 0xf1 ,0xf2, 0xf3*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xf4, 0xf5 ,0xf6, 0xf7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xf8, 0xf9 ,0xfa, 0xfb*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
	/*0xfc, 0xfd ,0xfe, 0xff*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
#endif
};

stCYFAC_DTVKeymap		TVKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_PRESET_DTV,            CMD_PRESET_ATV},
	// {CMD_STOP,					CMD_FREEZE},
	{CMD_TELETEXT_SUBTITLE,		CMD_STITLE},
	{CMD_NOP,					CMD_NOP},
};

stCYFAC_DTVKeymap		DTVKeyMapTab_CYFAC[] =
{
	// {CMD_STOP,					CMD_FREEZE},
	{CMD_NOP,					CMD_NOP},
};

stCYFAC_DTVKeymap		AVKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_CHANNEL_INC,			CMD_SOURCE_ATV},
	// {CMD_CHANNEL_DEC,			CMD_SOURCE_ATV},
	{CMD_NOP,					CMD_NOP},
};
stCYFAC_DTVKeymap		PCKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_CHANNEL_INC,			CMD_SOURCE_ATV},
	// {CMD_CHANNEL_DEC,			CMD_SOURCE_ATV},
	{CMD_NOP,					CMD_NOP},
};
stCYFAC_DTVKeymap		HDMIKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_TELETEXT,				CMD_PLAY_PAUSE},
	// {CMD_OPTION_YELLOW,			CMD_PREV},
	// {CMD_OPTION_BLUE,			CMD_NEXT},
	// {CMD_OPTION_RED,			CMD_FRWD},
	// {CMD_OPTION_GREEN,			CMD_FFWD},
	// {CMD_CHANNEL_INC,			CMD_SOURCE_ATV},
	// {CMD_CHANNEL_DEC,			CMD_SOURCE_ATV},
	{CMD_NOP,					CMD_NOP},
};
stCYFAC_DTVKeymap		MEDIAKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_CHANNEL_INC,           CMD_PLAY_PAUSE},
	// {CMD_TELETEXT,				CMD_PLAY_PAUSE},
	{CMD_MENU, 					CMD_QUICK},
	{CMD_EXIT,					CMD_RETURN},
	// {CMD_TT_TXCL,				CMD_NOP},
	{CMD_OPTION_YELLOW,			CMD_PREV},
	{CMD_OPTION_BLUE,			CMD_NEXT},
	{CMD_OPTION_RED,			CMD_FRWD},
	{CMD_OPTION_GREEN,			CMD_FFWD},
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stCYFAC_DTVKeymap		DVDKeyMapTab_CYFAC[] =
{
	// IR_CMD				DVD_CODE
	{CMD_MUTE,					0x003C},
	{CMD_NOP,					CMD_NOP},
};
#ifdef RTD_IC2938
stCYFAC_DTVKeymap		IPTVKeyMapTab_CYFAC[] =
{
	{CMD_EXIT,					CMD_RETURN},
	{CMD_NOP,					CMD_NOP},
};
#endif

stCYFAC_DTVKeymap		DefaultKeyMapTab_CYFAC[] =
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};

stCYFAC_DTVKeymap		TTKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_STOP,					CMD_TT_HOLD},
	// {CMD_SOURCE, 				CMD_TT_REVEAL},
	{CMD_DISPLAY_RATIO,			CMD_WIDE},
	// {CMD_TELETEXT_SUBTITLE,		CMD_OPTION_SUBPAGE},
	// {CMD_PVR_FILE_LIST,         CMD_TT_INDEX},
	// {CMD_DISPLAY,               CMD_TT_INDEX},
	{CMD_NOP,					CMD_NOP},
};


stCYFAC_DTVKeymap		RECKeyMapTab_CYFAC[] =
{
	// {CMD_DVB_T_C_MODE,          CMD_NOP},
	// {CMD_TELETEXT,				CMD_PLAY_PAUSE},
	{CMD_OPTION_YELLOW,			CMD_PREV},
	{CMD_OPTION_BLUE,			CMD_NEXT},
	{CMD_OPTION_RED,			CMD_FRWD},
	{CMD_OPTION_GREEN,			CMD_FFWD},
	{CMD_NOP,					CMD_NOP},
};


#if defined(ENABLE_DVD_SOURCE)
#define	DVD_IR_CUSTOMER		0xf700		// DVD Custom Code
static stCYFAC_DTVKeymap DVDKeyMapTab[] =
{
	{CMD_DTV_RDO_JUMP,					0x5c},//dvd open

	{CMD_ZERO,							0x0a},//4
	{CMD_ONE,							0x13},//4
	{CMD_TWO,							0x12},//4
	{CMD_THREE,							0x11},//4
	{CMD_FOUR,							0x10},//4
	{CMD_FIVE,							0x0f},//4
	{CMD_SIX,							0x0e},
	{CMD_SEVEN,							0x0d},
	{CMD_EIGHT,							0x0c},
	{CMD_NINE,							0x0b},
	{CMD_DASH,							0x08},

	{CMD_OPTION_RED,						0x15},
	{CMD_OPTION_GREEN,						0x08},
	{CMD_OPTION_YELLOW,					0x45},//3
	{CMD_OPTION_BLUE, 					0x44},

	{CMD_UP,										0x4a},
	{CMD_DOWN, 								0x1e},
	{CMD_LEFT, 									0x42},
	{CMD_RIGHT,									0x1d},
	{CMD_ENTER,									0x47},

	{CMD_PLAY_PAUSE,					0x03},
	{CMD_STOP, 							0x02},
	{CMD_FFWD,							0x07},
	{CMD_FRWD,							0x06},
	{CMD_PREV, 					0x05},
	{CMD_NEXT, 							0x04},

	{CMD_AUDIO,					0x10},
	{CMD_TELETEXT_SUBTITLE, 					0x55},
	{CMD_EPG,						0x1f},
	{CMD_EXIT, 						0x51},
	{CMD_DISPLAY,								0x5d},
	{CMD_JUMP,					0x49},
	{CMD_NOP,						0xFF},
	{0xff, 0xff},
};


/*************************************************************************************************************************************/
extern stCYFAC_DTVKeymap DVD_key[4];
extern unsigned int custome_code;
stCYFAC_DTVKeymap *pDVD_key = ( stCYFAC_DTVKeymap *)DVDKeyMapTab;
bool load_dvd_code ( void )
{
	int flag = 0x1 << 4;
	int i = 0;
	custome_code = DVD_IR_CUSTOMER;
	for (;;)
	{
		if ( pDVD_key[i].oriIRKey == DVD_key[0].oriIRKey )
		{
			DVD_key[0].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[0].dstIRKey);
			flag >>= 1;
		}
		else if ( pDVD_key[i].oriIRKey == DVD_key[1].oriIRKey )
		{
			DVD_key[1].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[1].dstIRKey);
			flag >>= 1;
		}
		else if ( pDVD_key[i].oriIRKey == DVD_key[2].oriIRKey )
		{
			DVD_key[2].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[2].dstIRKey);
			flag >>= 1;
		}
		else if ( pDVD_key[i].oriIRKey == DVD_key[3].oriIRKey )
		{
			DVD_key[3].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[3].dstIRKey);
			flag >>= 1;
		}
		i++;
		if ( pDVD_key[i].oriIRKey == CMD_NOP )
			break;
	}
	return ( flag == 0x1 ? true : false );
}
#endif
/*************************************************************************************************************************************/

int remote_CYFAC_nec(int code)
{
	stCYFAC_DTVKeymap* pKeymap = NULL;
	int   cDscIrKey = 0;
	int   cDscIrSWKey = 0;
	int i = 0;

	extern SourceOption SourceControl_GetCurSource();
	extern int TvApi_GetIDtvSubSource();
#ifdef RTD_IC2938
	extern bool ifIPTVsource();
#endif
	SourceOption source = SourceControl_GetCurSource();
	#ifndef BUILD_TV036_2_ISDB	
	extern int HK_GetTT_Enable(void);
	extern bool TvApi_IsRecording (void);
	#endif
	extern bool TvApi_GetMMode(void);
#if defined(ENABLE_DVD_SOURCE)
	extern int SendDVDIRProcess(unsigned short , unsigned char );
#endif
	//add by zjl@2014.10.18--start
	printf("customer_id=0x%x---key_code=0x%x\n", (code & 0x0000ffff), ((code & 0x00ff0000) >> 16));
	//add by zjl@2014.10.18--end

	if ((code & 0x0000ffff) != CYFAC_CUSTOMER)
		return -1;

	while (i <= 0xFF) //modify by zjl@2014.10.22
	{

		if (i == ((code & 0x00ff0000) >> 16))
		{
			cDscIrKey = stCYFAC_Keymap[i];
			break;
		}
		i++;
	}



	switch (source)
	{
	case SOURCE_IDTV1:
#if (defined CONFIG_VBI_TTX)
		#ifndef BUILD_TV036_2_ISDB		
		if (HK_GetTT_Enable())
			pKeymap = TTKeyMapTab_CYFAC;
		else
		#endif
			//add by lq@2014.12.16--start
		{
			if (TvApi_GetIDtvSubSource() >= 1)
			{
				#ifndef BUILD_TV036_2_ISDB		
				if ( TvApi_IsRecording() == true )
					pKeymap = RECKeyMapTab_CYFAC;
				else
				#endif	
					pKeymap = DTVKeyMapTab_CYFAC;
			}
			else
			{
				#ifndef BUILD_TV036_2_ISDB			
				if ( TvApi_IsRecording() == true )
					pKeymap = RECKeyMapTab_CYFAC;
				else
				#endif
					pKeymap = TVKeyMapTab_CYFAC;
			}
		}
		//add by lq@2014.12.16--end
#else
		//modify by zjl@2014.09.01--start
		if (TvApi_GetIDtvSubSource() >= 1)
			pKeymap = DTVKeyMapTab_CYFAC;
		else
			pKeymap = TVKeyMapTab_CYFAC;
		//modify by zjl@2014.09.01--end
#endif
		break;

	case SOURCE_AV1:
	case SOURCE_AV2:
	case SOURCE_YPP1:
	case SOURCE_YPP3:
#if (defined CONFIG_VBI_TTX)
		#ifndef BUILD_TV036_2_ISDB		
		if (HK_GetTT_Enable()) // != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
			pKeymap = TTKeyMapTab_CYFAC;
		else
		#endif
			pKeymap = AVKeyMapTab_CYFAC;

#else
		pKeymap = AVKeyMapTab_CYFAC;
#endif
		break;
	case SOURCE_SCART1:
#if defined(CONFIG_VBI_TTX)
		#ifndef BUILD_TV036_2_ISDB	
		if (HK_GetTT_Enable()) // != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
			pKeymap = TTKeyMapTab_CYFAC;
		else
		#endif	
#endif
			pKeymap = AVKeyMapTab_CYFAC;
		break;

	case SOURCE_VGA1:

		pKeymap = PCKeyMapTab_CYFAC;

		break;

	case SOURCE_HDMI1:

	case SOURCE_HDMI2:

	case SOURCE_HDMI3:
		pKeymap = HDMIKeyMapTab_CYFAC;
		break;

	case SOURCE_BROWSER:
	case SOURCE_OSD:
	case SOURCE_PLAYBACK:
		#ifdef RTD_IC2938
			if(ifIPTVsource() == true)
			{
				pKeymap = IPTVKeyMapTab_CYFAC;
			}
			else
			{
				pKeymap = MEDIAKeyMapTab_CYFAC;
			}
		#else
			pKeymap = MEDIAKeyMapTab_CYFAC;	
		#endif
		break;

#if defined(ENABLE_DVD_SOURCE)
	case SOURCE_YPP2:
		pKeymap = DVDKeyMapTab;
		break;
#endif
	default:
		pKeymap = DefaultKeyMapTab_CYFAC;
		break;

	}

	i = 0;
	cDscIrSWKey = cDscIrKey;
	while (pKeymap[i].oriIRKey	!=	CMD_NOP)
	{
		if (pKeymap[i].oriIRKey == cDscIrKey)
		{
			cDscIrSWKey = pKeymap[i].dstIRKey;

#if defined(ENABLE_DVD_SOURCE)
			if (SOURCE_YPP2 == source)
			{
				if (SendDVDIRProcess(DVD_IR_CUSTOMER, (unsigned char)cDscIrSWKey) == true)
				{
					printf("\n=>>>>>>> Send DVD code = 0x%x <<<<<<<<<<=\n", cDscIrSWKey);
					return CMD_NOP;
				}
				else
				{
					return cDscIrKey;
				}
			}
#endif
			break;
		}
		i++;
	}

	printf("====== Cur IR key(have piped) is %d i=%d \n", cDscIrKey, i);

	return cDscIrSWKey;

}
