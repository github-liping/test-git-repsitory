#include <stdio.h>
#include <Platform_Lib/RemoteControl/RemoteControl.h>
#include <Application/AppClass/setupdef_source_option.h>
#include "HDRE19_Map.h"

typedef	struct _stHDRE19_DTVKeyMAP
{
	int	oriIRKey;
	int	dstIRKey;
}stHDRE19_DTVKeymap;

int stHDRE19_Keymap[0x100] = {
/*0x00, 0x01 ,0x02, 0x03*/	CMD_ONE, CMD_NOP, CMD_VOL_UP, CMD_CHANNEL_INC,
/*0x04, 0x05 ,0x06, 0x07*/	CMD_DTV_RDO_JUMP, CMD_NOP, CMD_MENU, CMD_FAVCH,
/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_TELETEXT_SUBTITLE, CMD_VOL_DOWN, CMD_EXIT, CMD_PICTURE_MODE,
/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_NOP, CMD_EPG, CMD_NOP, CMD_DISPLAY_RATIO,

/*0x10, 0x11 ,0x12, 0x13*/	CMD_TWO, CMD_THREE, CMD_FRWD, CMD_FOUR,
/*0x14, 0x15 ,0x16, 0x17*/	CMD_FIVE, CMD_SIX, CMD_NOP, CMD_SEVEN,
/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_EIGHT, CMD_NINE, CMD_REPEAT, CMD_ZERO,
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_DASH, CMD_AUDIO, CMD_NOP, CMD_SLEEP,


/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x24, 0x25 ,0x26, 0x27*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x40, 0x41 ,0x42, 0x43*/	CMD_PC_AUTO_ADJUST, CMD_CHANNEL_DEC, CMD_DISPLAY, CMD_PVR_RECORD,
/*0x44, 0x45 ,0x46, 0x47*/	CMD_PREV, CMD_PLAY_PAUSE, CMD_SOUND_MODE, CMD_UP,
/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_PVR_TIMESHIFT, CMD_LEFT, CMD_ENTER, CMD_RIGHT,
/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_JUMP, CMD_DOWN, CMD_SOURCE, CMD_NOP,


/*0x50, 0x51 ,0x52, 0x53*/	CMD_NEXT, CMD_FFWD, CMD_POWER, CMD_MUTE,
/*0x54, 0x55 ,0x56, 0x57*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_AUDIO,
/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_NOP, CMD_PVR_FILE_LIST, CMD_NOP, CMD_STOP,
/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_OPTION_RED, CMD_OPTION_GREEN, CMD_OPTION_YELLOW, CMD_OPTION_BLUE,

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

stHDRE19_DTVKeymap		TVKeyMapTab_HDRE19[]=
{
	{CMD_PLAY_PAUSE,	        CMD_TELETEXT},
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
//add by zjl@2014.09.01--start
stHDRE19_DTVKeymap		DTVKeyMapTab_HDRE19[]=
{	
	{CMD_PLAY_PAUSE,	        CMD_TELETEXT},
	{CMD_NOP,					CMD_NOP},
};
//add by zjl@2014.09.01--end
stHDRE19_DTVKeymap		AVKeyMapTab_HDRE19[]=
{
	{CMD_PLAY_PAUSE,	        CMD_TELETEXT},
	{CMD_NOP,					CMD_NOP},
};
stHDRE19_DTVKeymap		PCKeyMapTab_HDRE19[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHDRE19_DTVKeymap		HDMIKeyMapTab_HDRE19[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};
stHDRE19_DTVKeymap		MEDIAKeyMapTab_HDRE19[]=
{	
	{CMD_MENU, 					CMD_QUICK},
	{CMD_EXIT,					CMD_RETURN},
	{CMD_NOP,					CMD_NOP},
};
stHDRE19_DTVKeymap		DVDKeyMapTab_HDRE19[]=
{	// IR_CMD					DVD_CODE
	
	{CMD_NOP,					CMD_NOP},
};
stHDRE19_DTVKeymap		DefaultKeyMapTab_HDRE19[]=
{
	{CMD_NOP,					CMD_NOP},
	{CMD_NOP,					CMD_NOP},
};	

stHDRE19_DTVKeymap		TTKeyMapTab_HDRE19[]=
{
	{CMD_PLAY_PAUSE,	            CMD_TELETEXT},
	{CMD_STOP,	             		CMD_WIDE},
	{CMD_FRWD,	                    CMD_TT_HOLD},
	{CMD_FFWD,	             		CMD_TT_INDEX},
	{CMD_PREV,	             		CMD_TT_REVEAL},
	{CMD_NEXT,	             		CMD_OPTION_SUBPAGE},
	{CMD_NOP,				CMD_NOP},
};

#if defined(ENABLE_DVD_SOURCE)
	#define	DVD_IR_CUSTOMER		0x7F00		// DVD Custom Code
static stHDRE19_DTVKeymap DVDKeyMapTab[]=
{// IR_CMD				DVD_CODE
	{CMD_LEFT,   		0x02},	
	{CMD_RIGHT,  		0x40},
	{CMD_UP,  		    0x03},	
	{CMD_DOWN,  		0x5E},
	{CMD_DISPLAY,  		0x5A},
	{CMD_ENTER,  		0x5f},
	{CMD_RETURN,     	0x04},	
//	{CMD_FAVCH_EDIT,    0x0E}, 
//	{CMD_AB_REPEAT,   	0x10},	
	/*{CMD_0,     		0x13},	
	{CMD_1,  			0x1A},
	{CMD_2,  		 	0x1f},
	{CMD_3,  		 	0x58},
	{CMD_4,         	0x16},
	{CMD_5, 	   		0x1B},
	{CMD_6, 	   		0x54},
	{CMD_7,   		    0x12},	
	{CMD_8,         	0x17},
	{CMD_9,  		 	0x50},*/
	{CMD_AUDIO,			0x18},
	{CMD_PREV,  		0x4d},
	{CMD_NEXT,  		0x4E},
	{CMD_FRWD,  		0x4f},
	{CMD_FFWD,   		0x0C},	
	{CMD_GUIDE,  		0x51},
	{CMD_STITLE,     	0x52},
	{CMD_REPEAT,  		0x53},
	{CMD_PLAY,      	0x55},
	{CMD_STOP,  		0x56},
	{CMD_EJECT,  		0x59},
	//{CMD_SETUP,  		0x5b},
	//{CMD_EXIT_ALL,  	0x5D},
	{CMD_NOP,			CMD_NOP},	
};


/*************************************************************************************************************************************/
extern stHDRE19_DTVKeymap DVD_key[4];
extern unsigned int custome_code;
stHDRE19_DTVKeymap *pDVD_key = ( stHDRE19_DTVKeymap *)DVDKeyMapTab;
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

int remote_HDRE19_nec(int code)
{
	stHDRE19_DTVKeymap* pKeymap=NULL;
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
	printf("customer_id=0x%x---key_code=0x%x\n",(code & 0x0000ffff),((code & 0x00ff0000)>>16));
	if((code & 0x0000ffff) != HDRE19_CUSTOMER)
	            return -1;
     
	while(i <= 0xFF) //modify by zjl@2014.10.22
	{
		if(i == ((code & 0x00ff0000) >> 16))
		{
			cDscIrKey=stHDRE19_Keymap[i];
			break;
		}
		i++;
	}
	
	switch (source)
	{
		case SOURCE_IDTV1:
#if (defined CONFIG_VBI_TTX)
			if(HK_GetTT_Enable())
				pKeymap=TTKeyMapTab_HDRE19;
			else
			//modify by zjl@2014.09.01--start	
			{
				if(TvApi_GetIDtvSubSource() >= 1)
					pKeymap=DTVKeyMapTab_HDRE19;
				else
					pKeymap=TVKeyMapTab_HDRE19;
			}
                     //modify by zjl@2014.09.01--end	
#else
			//modify by zjl@2014.09.01--start	
			if(TvApi_GetIDtvSubSource() >= 1)
				pKeymap=DTVKeyMapTab_HDRE19;
			else
				pKeymap=TVKeyMapTab_HDRE19;
			//modify by zjl@2014.09.01--end
#endif
			break;
		
		case SOURCE_AV1:
		case SOURCE_AV2:
#if (defined CONFIG_VBI_TTX)
			
			if(HK_GetTT_Enable())// != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
				pKeymap=TTKeyMapTab_HDRE19;
			else
				pKeymap=AVKeyMapTab_HDRE19;

#else
				pKeymap=AVKeyMapTab_HDRE19;
#endif
			break;
		case SOURCE_SCART1:
			if(HK_GetTT_Enable())// != TTX_DISP_TYPE_NONE && TTX_Ctrl_GetDispType() != TTX_DISP_TYPE_SUBTITLE )
				pKeymap=TTKeyMapTab_HDRE19;
			else
				pKeymap=AVKeyMapTab_HDRE19;
			break;
		
		case SOURCE_VGA1:
		
			pKeymap=PCKeyMapTab_HDRE19;
		
			break;
		
		case SOURCE_HDMI1:
		
		case SOURCE_HDMI2:
		
		case SOURCE_HDMI3:
		
			pKeymap=HDMIKeyMapTab_HDRE19;
		
			break;
		
		case SOURCE_BROWSER:
		case SOURCE_OSD:
		case SOURCE_PLAYBACK://add by zjl@2014.06.11
			pKeymap=MEDIAKeyMapTab_HDRE19;
			break;
		
#if defined(ENABLE_DVD_SOURCE)
		case SOURCE_YPP2:
			pKeymap=DVDKeyMapTab;
			break;
#endif
		default:
			pKeymap=DefaultKeyMapTab_HDRE19;
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
