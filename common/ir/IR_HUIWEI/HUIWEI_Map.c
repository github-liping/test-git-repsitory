#include <stdio.h>
#include <Platform_Lib/RemoteControl/RemoteControl.h>
#include <Application/AppClass/setupdef_source_option.h>
#include "HUIWEI_Map.h"

typedef	struct _stHUIWEI_DTVKeyMAP
{
	int	oriIRKey;
	int	dstIRKey;
}stHUIWEI_DTVKeymap;

int stHUIWEI_Keymap[0x100] = {
/*0x00, 0x01 ,0x02, 0x03*/	CMD_EXIT, CMD_STOP, CMD_LEFT, CMD_UP,
/*0x04, 0x05 ,0x06, 0x07*/	CMD_USB_DVD_EVENT, CMD_CHANNEL_DEC, CMD_VOL_DOWN, CMD_SOURCE,
/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_PVR_RECORD, CMD_CHANNEL_INC, CMD_VOL_UP, CMD_DISPLAY_RATIO,
/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_FFWD, CMD_ZERO, CMD_SLEEP, CMD_DISPLAY,

/*0x10, 0x11 ,0x12, 0x13*/	CMD_EPG, CMD_SEVEN, CMD_SEVEN, CMD_ZERO,
/*0x14, 0x15 ,0x16, 0x17*/	CMD_OPTION_BLUE, CMD_THREE, CMD_FOUR, CMD_EIGHT,
/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_CHANNEL_DEC, CMD_DISPLAY_RATIO, CMD_ONE, CMD_FIVE,
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_MENU, CMD_PVR_RECORD, CMD_POWER, CMD_TWO,

/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x24, 0x25 ,0x26, 0x27*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x40, 0x41 ,0x42, 0x43*/	CMD_RIGHT, CMD_TELETEXT, CMD_PICTURE_MODE, CMD_SOUND_MODE,
/*0x44, 0x45 ,0x46, 0x47*/	CMD_NOP, CMD_DVDMENU, CMD_REPEAT, CMD_FAVCH,
/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_DOWN, CMD_MENU, CMD_DVD_ZOOM, CMD_PVR_FILE_LIST,
/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_JUMP, CMD_PREV, CMD_NEXT, CMD_FRWD,

/*0x50, 0x51 ,0x52, 0x53*/	CMD_NINE, CMD_PLAY_PAUSE, CMD_STOP, CMD_STEP,
/*0x54, 0x55 ,0x56, 0x57*/	CMD_SIX, CMD_OPTION_RED, CMD_OPTION_GREEN, CMD_OPTION_YELLOW,
/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_THREE, CMD_AUDIO, CMD_LIST, CMD_CHANNEL_INC,
/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_MUTE, CMD_TELETEXT_SUBTITLE, CMD_DOWN, CMD_ENTER,


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
/*0xc4, 0xc5 ,0xc6, 0xc7*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
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
};
stHUIWEI_DTVKeymap		TVKeyMapTab_HUIWEI[]=
{
	{CMD_TELETEXT_SUBTITLE,		CMD_STITLE},
	{CMD_NOP,					CMD_NOP},
};
//add by zjl@2014.09.01--start
stHUIWEI_DTVKeymap		DTVKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
};
//add by zjl@2014.09.01--end
stHUIWEI_DTVKeymap		AVKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHUIWEI_DTVKeymap		PCKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHUIWEI_DTVKeymap		HDMIKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHUIWEI_DTVKeymap		MEDIAKeyMapTab_HUIWEI[]=
{
	{CMD_MENU, 					CMD_QUICK},
	{CMD_EXIT,					CMD_RETURN},
	{CMD_TT_TXCL,				CMD_NOP},
	{CMD_OPTION_YELLOW,			CMD_REPEAT},
	{CMD_EPG,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHUIWEI_DTVKeymap		DVDKeyMapTab_HUIWEI[]=
{	// IR_CMD				DVD_CODE
	//{CMD_MUTE,				0x003C},
	{CMD_NOP,					CMD_NOP},
};
stHUIWEI_DTVKeymap		DefaultKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};	

stHUIWEI_DTVKeymap		TTKeyMapTab_HUIWEI[]=
{
	{CMD_NOP,					CMD_NOP},
};

#if defined(ENABLE_DVD_SOURCE)
	#define	DVD_IR_CUSTOMER		0xf700		// DVD Custom Code
static stHUIWEI_DTVKeymap DVDKeyMapTab[]=
{
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
	{CMD_DASH,							0x09},
	
	{CMD_OPTION_RED,					0x00}, 

	{CMD_UP,							0x4a},
	{CMD_DOWN, 							0x1e},
	{CMD_LEFT, 							0x42},
	{CMD_RIGHT,							0x1d},
	{CMD_ENTER,							0x47},

	{CMD_PLAY_PAUSE,					0x03},
	{CMD_STOP, 							0x02},
	{CMD_FFWD,							0x07},
	{CMD_FRWD,							0x06},
	{CMD_PREV, 							0x05},
	{CMD_NEXT, 							0x04},

	{CMD_EPG,							0x01},
	{CMD_DVD_ZOOM,						0x58},
	{CMD_PVR_FILE_LIST, 				0x18},
	{CMD_STEP,                 			0x54},
	{CMD_USB_DVD_EVENT, 				0x5c},
	{CMD_DVDMENU,						0x14},
	{CMD_REPEAT,                      	0x45},
	{CMD_FAVCH, 						0x44},
	{CMD_PVR_RECORD,					0x1f},
	
	{CMD_NOP,							0xFF},
	{0xff,0xff},
};
#endif

int remote_HUIWEI_nec(int code)
{
	stHUIWEI_DTVKeymap* pKeymap=NULL;
	int   cDscIrKey=0;
	int   cDscIrSWKey=0;
	int i =0;

	extern SourceOption SourceControl_GetCurSource();
	extern int TvApi_GetIDtvSubSource();
	SourceOption source = SourceControl_GetCurSource();
	extern int HK_GetTT_Enable(void);
	
#if defined(ENABLE_DVD_SOURCE)
		extern int SendDVDIRProcess(unsigned short , unsigned char );
#endif		
    //add by zjl@2014.10.18--start
	printf("customer_id=0x%x---key_code=0x%x\n",(code & 0x0000ffff),((code & 0x00ff0000)>>16));
	//add by zjl@2014.10.18--end

	if((code & 0x0000ffff) != HUIWEI_CUSTOMER)
	    return -1;

	while(i <=0xFF) //modify by zjl@2014.10.22
	{
		if(i == ((code & 0x00ff0000) >> 16))
		{
			cDscIrKey=stHUIWEI_Keymap[i];
			break;
		}
		i++;
	}
	
	switch (source)
	{
		case SOURCE_IDTV1:
#if (defined CONFIG_VBI_TTX)
			if(HK_GetTT_Enable())
				pKeymap=TTKeyMapTab_HUIWEI;
			else
			//modify by zjl@2014.09.01--start	
			{
				if(TvApi_GetIDtvSubSource() >= 1)
					pKeymap=DTVKeyMapTab_HUIWEI;
				else
					pKeymap=TVKeyMapTab_HUIWEI;
			}
                     //modify by zjl@2014.09.01--end	
#else
			//modify by zjl@2014.09.01--start	
			if(TvApi_GetIDtvSubSource() >= 1)
				pKeymap=DTVKeyMapTab_HUIWEI;
			else
				pKeymap=TVKeyMapTab_HUIWEI;
			//modify by zjl@2014.09.01--end
#endif
			break;
		
		case SOURCE_AV1:
#if (defined CONFIG_VBI_TTX)
			
			if(HK_GetTT_Enable())// != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
				pKeymap=TTKeyMapTab_HUIWEI;
			else
				pKeymap=AVKeyMapTab_HUIWEI;

#else
				pKeymap=AVKeyMapTab_HUIWEI;
#endif
			break;
		case SOURCE_SCART1:
			if(HK_GetTT_Enable())// != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
				pKeymap=TTKeyMapTab_HUIWEI;
			else
				pKeymap=AVKeyMapTab_HUIWEI;
			break;
		
		case SOURCE_VGA1:
		
			pKeymap=PCKeyMapTab_HUIWEI;
		
			break;
		
		case SOURCE_HDMI1:
		
		case SOURCE_HDMI2:
		
		case SOURCE_HDMI3:
			pKeymap=HDMIKeyMapTab_HUIWEI;
			break;
		
		case SOURCE_BROWSER:
		case SOURCE_OSD:
		case SOURCE_PLAYBACK://add by zjl@2014.06.11
			pKeymap=MEDIAKeyMapTab_HUIWEI;
			break;
		
#if defined(ENABLE_DVD_SOURCE)
		case SOURCE_YPP2:
			pKeymap=DVDKeyMapTab;
			break;
#endif
		default:
			pKeymap=DefaultKeyMapTab_HUIWEI;
			break;
		
	}

	i = 0;
	cDscIrSWKey=cDscIrKey;
	while(pKeymap[i].oriIRKey	!=	CMD_NOP)
	{
		if(pKeymap[i].oriIRKey == cDscIrKey)
		{
			cDscIrSWKey = pKeymap[i].dstIRKey;
			
#if defined(ENABLE_DVD_SOURCE)	
			if(SOURCE_YPP2 == source)
			{
				if(SendDVDIRProcess(DVD_IR_CUSTOMER, (unsigned char)cDscIrSWKey)==true)
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
	
printf("====== Cur IR key(have piped) is %d i=%d \n",cDscIrKey,i);

return cDscIrSWKey;

}
