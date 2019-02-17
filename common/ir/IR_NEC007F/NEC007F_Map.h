#ifndef __NEC007F_MAP_H__
#define __NEC007F_MAP_H__
#if 1
#define NEC007F_CUSTOMER					0x7f00//0x007f
#define NEC007F_IR_POWER			0xf50A7f00
extern int remote_NEC007F_nec(int);

#else

/*MapUse*/ #define ZHJP_CUSTOMER         0xf700
/*MapUse*/ #define ZHJP_IR_POWER         0xef30cf700
/*MapUse*/ extern int remote_ZHJP_nec(int);
#endif

#endif
