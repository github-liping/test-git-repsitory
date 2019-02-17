#include <stdio.h>
#include <Platform_Lib/RemoteControl/RemoteControl.h>
#include <Application/AppClass/setupdef_source_option.h>
#include "RS41_Map.h"

typedef	struct _stRS41_DTVKeyMAP
{
	int	oriIRKey;
	int	dstIRKey;
}stRS41_DTVKeymap;

int stRS41_Keymap[0x100] = {
/*0x00, 0x01 ,0x02, 0x03*/	CMD_ZERO, CMD_ONE, CMD_TWO, CMD_THREE,
/*0x04, 0x05 ,0x06, 0x07*/	CMD_FOUR, CMD_FIVE, CMD_SIX, CMD_SEVEN,
/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_EIGHT, CMD_NINE, CMD_JUMP, CMD_DISPLAY,
/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_POWER, CMD_CHANNEL_DEC, CMD_CHANNEL_INC, CMD_VOL_DOWN,

/*0x10, 0x11 ,0x12, 0x13*/	CMD_VOL_UP, CMD_MUTE, CMD_MENU, CMD_UP,
/*0x14, 0x15 ,0x16, 0x17*/	CMD_DOWN, CMD_LEFT, CMD_RIGHT, CMD_ENTER,
/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_SOURCE, CMD_NOP, CMD_NOP, CMD_PICTURE_MODE,
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_EXIT, CMD_FAVCH, CMD_TELETEXT, CMD_QJYB,

/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x24, 0x25 ,0x26, 0x27*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x40, 0x41 ,0x42, 0x43*/	CMD_DTV_RDO_JUMP, CMD_NOP, CMD_PICTURE_MODE, CMD_SOUND_MODE,
#if defined(SIMPLE_RECORD)
/*0x44, 0x45 ,0x46, 0x47*/	CMD_PLAY_PAUSE, CMD_PREV, CMD_TELETEXT_SUBTITLE, CMD_PVR_RECORD,
#else
/*0x44, 0x45 ,0x46, 0x47*/	CMD_PLAY_PAUSE, CMD_PREV, CMD_TELETEXT_SUBTITLE, CMD_PVR_RECORD,
#endif
/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_EPG, CMD_FRWD, CMD_FFWD , CMD_AUDIO ,
/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_NEXT, CMD_OPTION_RED, CMD_OPTION_GREEN, CMD_OPTION_YELLOW,

/*0x50, 0x51 ,0x52, 0x53*/	CMD_OPTION_BLUE, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x54, 0x55 ,0x56, 0x57*/	CMD_NOP, CMD_NOP, CMD_LIST, CMD_NOP,
/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_FAVCH_UP, CMD_NOP, CMD_USB, CMD_NOP,
/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_NOP, CMD_NOP, CMD_FREEZE, CMD_NOP,

};

stRS41_DTVKeymap		TVKeyMapTab_RS41[]=
{
	{CMD_TELETEXT_SUBTITLE,		CMD_STITLE},
	{CMD_NOP,					CMD_NOP},
};

stRS41_DTVKeymap		DTVKeyMapTab_RS41[]=
{
	{CMD_PLAY_PAUSE,			CMD_PVR_TIMESHIFT},
	{CMD_NOP,					CMD_NOP},
};

stRS41_DTVKeymap		AVKeyMapTab_RS41[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stRS41_DTVKeymap		PCKeyMapTab_RS41[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stRS41_DTVKeymap		HDMIKeyMapTab_RS41[]=
{
	{CMD_EPG,					CMD_STOP},
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stRS41_DTVKeymap		MEDIAKeyMapTab_RS41[]=
{
	{CMD_MENU, 					CMD_QUICK},
	{CMD_EXIT,					CMD_RETURN},
	{CMD_TT_TXCL,				CMD_NOP},
	#ifndef ENABLE_USB_FILE_COPY
	{CMD_OPTION_YELLOW,			CMD_REPEAT},
	#endif
	{CMD_OPTION_BLUE,			CMD_AB_REPEAT},
	{CMD_EPG,					CMD_STOP},
	{CMD_NOP,					CMD_NOP},
};
stRS41_DTVKeymap		DVDKeyMapTab_RS41[]=
{	// IR_CMD				DVD_CODE
	{CMD_MUTE,					0x003C},
	{CMD_NOP,					CMD_NOP},
};
stRS41_DTVKeymap		DefaultKeyMapTab_RS41[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};

stRS41_DTVKeymap		TTKeyMapTab_RS41[]=
{
	{CMD_FAVCH,					CMD_TT_MIX},
	{CMD_FFWD, 					CMD_TT_HOLD},
	{CMD_PREV, 					CMD_TT_REVEAL},
	{CMD_FRWD,					CMD_TT_INDEX},
	{CMD_TELETEXT_SUBTITLE,			CMD_WIDE},
	{CMD_AUDIO,					CMD_TT_TXCL},
	{CMD_NEXT,					CMD_OPTION_SUBPAGE},
	{CMD_NOP,					CMD_NOP},
};

stRS41_DTVKeymap		RECKeyMapTab_RS41[]=
{
	{CMD_EPG,					CMD_STOP},
	{CMD_NOP,					CMD_NOP},
};

#if defined(ENABLE_DVD_SOURCE)
#define	DVD_IR_CUSTOMER		0xf700		// DVD Custom Code
static stRS41_DTVKeymap DVDKeyMapTab[]=
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
//	{CMD_DASH,							0x08},

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
	{0xff,0xff},
};

/*************************************************************************************************************************************/
extern stRS41_DTVKeymap DVD_key[4];
extern unsigned int custome_code;
stRS41_DTVKeymap *pDVD_key = ( stRS41_DTVKeymap *)DVDKeyMapTab;
bool load_dvd_code ( void )
{
	int flag = 0x1 << 4;
	int i = 0;
	custome_code = DVD_IR_CUSTOMER;
	for(;;)
	{
		if( pDVD_key[i].oriIRKey == DVD_key[0].oriIRKey )
		{
			DVD_key[0].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[0].dstIRKey);
			flag >>= 1;
		}
		else if( pDVD_key[i].oriIRKey == DVD_key[1].oriIRKey )
		{
			DVD_key[1].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[1].dstIRKey);
			flag >>= 1;
		}
		else if( pDVD_key[i].oriIRKey == DVD_key[2].oriIRKey )
		{
			DVD_key[2].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[2].dstIRKey);
			flag >>= 1;
		}
		else if( pDVD_key[i].oriIRKey == DVD_key[3].oriIRKey )
		{
			DVD_key[3].dstIRKey =  pDVD_key[i].dstIRKey;
			pDVD_key[i].oriIRKey = CMD_SOURCE_YPP2;
			printf("%s load dvd code = 0x%x\n", __func__, DVD_key[3].dstIRKey);
			flag >>= 1;
		}
		i++;
		if( pDVD_key[i].oriIRKey == CMD_NOP )
			break;
	}
	return ( flag == 0x1 ? true : false );
}
#endif

/*************************************************************************************************************************************/
extern int HK_GetTT_Enable(void);
extern bool TvApi_IsRecording (void);
#if defined(ENABLE_DVD_SOURCE)
extern int SendDVDIRProcess(unsigned short , unsigned char );
#endif
extern SourceOption SourceControl_GetCurSource();
extern int TvApi_GetIDtvSubSource();

int remote_RS41_nec(int code)
{
	stRS41_DTVKeymap* pKeymap=NULL;
	int   cDscIrKey=0;
	int   cDscIrSWKey=0;
	int i =0;
	SourceOption source = SourceControl_GetCurSource();
	extern bool ifIPTVsource();
	
	if((code & 0x0000ffff) != RS41_CUSTOMER)
	{
		return -1;
	}

	printf("<Hikeen ir remote_RS41_nec> customer_id=0x%x---key_code=0x%x\n",(code & 0x0000ffff),((code & 0x00ff0000)>>16));
	while(i <=0xFF)
	{
		if(i == ((code & 0x00ff0000) >> 16))
		{
			cDscIrKey=stRS41_Keymap[i];
			break;
		}
		i++;
	}

	switch (source)
	{
		case SOURCE_IDTV1:
		#if (defined CONFIG_VBI_TTX)
		if(HK_GetTT_Enable())
		{
			pKeymap=TTKeyMapTab_RS41;
		}
		else
		{
			if(TvApi_GetIDtvSubSource() >= 1)
			{
				if( TvApi_IsRecording() == true )
				{
					pKeymap=RECKeyMapTab_RS41;
				}
				else
				{
					pKeymap=DTVKeyMapTab_RS41;
				}
			}
			else
			{
				if( TvApi_IsRecording() == true )
				{
					pKeymap=RECKeyMapTab_RS41;
				}
				else
				{
					pKeymap=TVKeyMapTab_RS41;
				}
			}
		}
		#else
		if(TvApi_GetIDtvSubSource() >= 1)
		{
			pKeymap=DTVKeyMapTab_RS41;
		}
		else
		{
			pKeymap=TVKeyMapTab_RS41;
		}
		#endif
		break;

		case SOURCE_AV1:
		case SOURCE_AV2:
		#if (defined CONFIG_VBI_TTX)
		if(HK_GetTT_Enable())
		{
			pKeymap=TTKeyMapTab_RS41;
		}
		else
		{
			pKeymap=AVKeyMapTab_RS41;
		}
		#else
		pKeymap=AVKeyMapTab_RS41;
		#endif
		break;

		case SOURCE_SCART1:
		if(HK_GetTT_Enable())
		{
			pKeymap=TTKeyMapTab_RS41;
		}
		else
		{
			pKeymap=AVKeyMapTab_RS41;
		}
		break;

		case SOURCE_VGA1:
		pKeymap=PCKeyMapTab_RS41;
		break;

		case SOURCE_HDMI1:
		case SOURCE_HDMI2:
		case SOURCE_HDMI3:
		pKeymap=HDMIKeyMapTab_RS41;
		break;

		case SOURCE_BROWSER:
		case SOURCE_OSD:
		case SOURCE_PLAYBACK:
		pKeymap=MEDIAKeyMapTab_RS41;
		break;

		#if defined(ENABLE_DVD_SOURCE)
		case SOURCE_YPP2:
		pKeymap=DVDKeyMapTab;
		break;
		#endif

		default:
		pKeymap=DefaultKeyMapTab_RS41;
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
	//printf("====== Cur IR key(have piped) is %d i=%d \n",cDscIrKey,i);
	return cDscIrSWKey;
}
