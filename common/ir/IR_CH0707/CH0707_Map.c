#include <stdio.h>
#include <Platform_Lib/RemoteControl/RemoteControl.h>
#include <Application/AppClass/setupdef_source_option.h>
#include "CH0707_Map.h"

int stCH0707_Keymap[0x100] = {
/*0x00, 0x01 ,0x02, 0x03*/	CMD_NOP, CMD_STOP, CMD_TT_TXCL, CMD_SOUND_MODE,
/*0x04, 0x05 ,0x06, 0x07*/	CMD_NOP, CMD_CHANNEL_DEC, CMD_ENTER, CMD_RIGHT,
/*0x08, 0x09 ,0x0a, 0x0b*/	CMD_MUTE, CMD_CHANNEL_INC, CMD_EXIT, CMD_NOP,
/*0x0c, 0x0d ,0x0e, 0x0f*/	CMD_DASH, CMD_ZERO, CMD_NINE, CMD_NOP,

/*0x10, 0x11 ,0x12, 0x13*/	CMD_EIGHT, CMD_SEVEN, CMD_SIX, CMD_NOP,
/*0x14, 0x15 ,0x16, 0x17*/	CMD_FOUR, CMD_THREE, CMD_TWO, CMD_DISPLAY,
/*0x18, 0x19 ,0x1a, 0x1b*/	CMD_SOURCE, CMD_DISPLAY_RATIO, CMD_UP, CMD_PICTURE_MODE,
#if defined(ENABLE_TTX_SUBPAGE_BEHAVIOR_2)

#if defined(SIMPLE_RECORD)
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_POWER, CMD_PVR_RECORD, CMD_OPTION_SUBPAGE, CMD_TELETEXT_SUBTITLE,
#else
/*0x1c, 0x1d ,0x1e, 0x1f*/	CMD_POWER, CMD_NOP, CMD_OPTION_SUBPAGE, CMD_TELETEXT_SUBTITLE,
#endif
#endif
/*0x20, 0x21 ,0x22, 0x23*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x24, 0x25 ,0x26, 0x27*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x28, 0x29 ,0x2a, 0x2b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x2c, 0x2d ,0x2e, 0x2f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x30, 0x31 ,0x32, 0x33*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x34, 0x35 ,0x36, 0x37*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x38, 0x39 ,0x3a, 0x3b*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,
/*0x3c, 0x3d ,0x3e, 0x3f*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_NOP,

/*0x40, 0x41 ,0x42, 0x43*/	CMD_FAVCH_DOWN, CMD_PLAY_PAUSE, CMD_DTV_RDO_JUMP, CMD_EPG,
#if defined(SIMPLE_RECORD)
/*0x44, 0x45 ,0x46, 0x47*/	CMD_NOP, CMD_PVR_SCHEDULE_LIST, CMD_PVR_FILE_LIST, CMD_LEFT,
#else
/*0x44, 0x45 ,0x46, 0x47*/	CMD_NOP, CMD_NOP, CMD_NOP, CMD_LEFT,
#endif
/*0x48, 0x49 ,0x4a, 0x4b*/	CMD_DOWN, CMD_MENU, CMD_SLEEP, CMD_VOL_UP,
/*0x4c, 0x4d ,0x4e, 0x4f*/	CMD_JUMP, CMD_NOP, CMD_AUDIO, CMD_VOL_DOWN,

/*0x50, 0x51 ,0x52, 0x53*/	CMD_FIVE, CMD_OPTION_YELLOW, CMD_TELETEXT, CMD_PREV,
/*0x54, 0x55 ,0x56, 0x57*/	CMD_ONE, CMD_OPTION_BLUE, CMD_LIST, CMD_NEXT,
/*0x58, 0x59 ,0x5a, 0x5b*/	CMD_FAVCH_UP, CMD_OPTION_GREEN, CMD_USB, CMD_FFWD,
/*0x5c, 0x5d ,0x5e, 0x5f*/	CMD_FAVCH, CMD_OPTION_RED, CMD_FREEZE, CMD_FRWD,


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

int remote_CH0707_nec(int code)
{
	//add by zjl@2014.10.15--start
	extern SourceOption SourceControl_GetCurSource();
	SourceOption source = SourceControl_GetCurSource();
	//add by zjl@2014.10.15--end
	
	if((code & 0x0000ffff) != CH0707_CUSTOMER)
	{
		return -1;
    }
	switch((code & 0x00ff0000)>>16) 
	{
		case 0x02:
			return CMD_POWER;
		case 0x11:
			return CMD_ZERO;
		case 0x04:
			return CMD_ONE;
		case 0x05:
			return CMD_TWO;
		case 0x06:
			return CMD_THREE;
		case 0x08:
			return CMD_FOUR;	
		case 0x09:
			return CMD_FIVE;
		case 0x0a:
			return CMD_SIX;
		case 0x0c:
			return CMD_SEVEN;
		case 0x0d:
			return CMD_EIGHT;
		case 0x0e:
			return CMD_NINE;
		case 0x2c:
			return CMD_DASH;
		case 0x13:
			return CMD_JUMP;
				
			
			
		case 0x01:
			return CMD_SOURCE;	
		case 0x58:
			return CMD_MENU;
		case 0x60:
			return CMD_UP;
		case 0x61:
			return CMD_DOWN;
		case 0x65:
			return CMD_LEFT;
		case 0x62:
			return CMD_RIGHT;
		case 0x68:
			return CMD_ENTER;
		
		case 0x07:
			return CMD_VOL_UP;	
		case 0x0b:
			return CMD_VOL_DOWN;
		case 0x12:
			return CMD_CHANNEL_INC;
		case 0x10:
			return CMD_CHANNEL_DEC;
		case 0x55:
			return CMD_AUDIO;
			
		case 0x41:
		#ifndef BUILD_TV036_2_ISDB //Add by wangld @ 2018.1.2
			return	CMD_TELETEXT;
		#else 
			return CMD_CAPTION;
		#endif
		
		case 0x4d:
			return CMD_EPG;
		
		case 0x1a:
			return CMD_DISPLAY;
		case 0x8c:
			return CMD_SLEEP;
		case 0x2d:
		{
			//modify by zjl@2014.10.15--start	
			if((source == SOURCE_OSD)
			   || (source == SOURCE_PLAYBACK)
			   || (source == SOURCE_MEDIA)	
			   )
				return CMD_RETURN;
			else
				return CMD_EXIT;
			//modify by zjl@2014.10.15--end
		}
		case 0x48:   
#ifndef BUILD_TV036_2_ISDB     //Add by wangld @ 2018.1.12 --start
			return CMD_PC_AUTO_ADJUST;
#else 
			return CMD_EXIT_BURN_MODE;
#endif                         //Add by wangld @ 2018.1.12 --end
		
		case 0x6c:
			return CMD_OPTION_RED;
		case 0x14:
			return CMD_OPTION_GREEN;
		case 0x15:
			return CMD_OPTION_YELLOW;
		case 0x16:
			return CMD_OPTION_BLUE;
		case 0x28:
			return CMD_FRWD;
		case 0x3e:
			return CMD_FFWD;
		case 0x6e:
			return CMD_PREV;
		case 0x46:
			return CMD_NEXT;
		case 0x45:
			return CMD_PLAY_PAUSE;	
		case 0x47:
			return CMD_STOP;	
			
		case 0x0f:
			return CMD_MUTE;
		
#if defined(SIMPLE_RECORD)
		case 0x59:
			return CMD_PVR_RECORD;
#endif
		case 0x8b:
			return CMD_DISPLAY_RATIO;
		case 0x4b:
			return CMD_SOUND_MODE;	
		case 0x1f:
			return CMD_PICTURE_MODE;
		
		case 0x1b:
			return CMD_PANEL_SD;

		
		case 0x18:
			return CMD_FAC_MENU;
		
			
		/*add by zjl@2015.08.18--for auto test at factory.*/	
		
		case 0x80:
			/*source ATV*/
			return CMD_SOURCE_ATV;	 
		case 0x81:
			/*source DTV*/
			return CMD_SOURCE_DTV;
		case 0x82:
			/*source AV1*/
			return CMD_SOURCE_AV;		
		case 0x89:
			/*source AV2*/
			return CMD_SOURCE_AV2;	
		case 0x83:
			/*source YPBPR*/
			return  CMD_SOURCE_YPBPR;
		case 0x85:
			/*source HDMI1*/
			return CMD_SOURCE_HDMI1;		
		case 0x86:
			/*source HDMI2*/
			return CMD_SOURCE_HDMI2;	
		case 0x87:	
			/*source HDMI3*/
			return CMD_SOURCE_HDMI3;	
		case 0x4a:
			/*source USB*/
			return CMD_USB;		
		case 0x88:
			/*source SCART*/	
			return CMD_SOURCE_SCART;	
		
		case 0xFB:
			/*import ATV preset channels.*/
			return CMD_PRESET_ATV;
		
		case 0xFD:
			/*export DTV channels to USB.*/
			return CMD_EXPORT_DTV;
		
		case 0x84:
			/*source VGA*/
			return CMD_SOURCE_VGA;
		/*add by zjl@2015.08.18--for auto test at factory.*/
		
		default:   return -1;
	}
}
