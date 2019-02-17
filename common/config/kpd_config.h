/*
 *	head file
 ***********************
 * Don`t Change define *
 ***********************
 *	Build by Longqi
 *	Date 2015 - 09 -09
 */
#ifdef CONFIG_ISDB_SYSTEM

#ifndef __KPD_CONFIG_H
#define __KPD_CONFIG_H

/* define adc range */

	#if defined(ENABLE_ONE_KEY) //for HKC ISDB 2936P533
	#define RANGE_K0 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(0, 30)		   //k0
	#elif defined(ENABLE_FIVE_KEY)//for ChangJia ISDB 2936P532
	#define RANGE_K1 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(0, 30)         //k1
	#define RANGE_K2 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(76, 20)         //k2 //207-214
	#define RANGE_K3 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(133, 20)        //k3  //168-179
	#define RANGE_K4 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(174, 12)        //k4  //129-136
	#define RANGE_K5 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(206, 10)        //k5   //71-80
	#else
		
		#ifdef CONFIG_HAOWEI_2936E05_ISDB
		#define RANGE_K0 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(216, 228)          //k0
		#define RANGE_K1 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(31, 42)         //k1
		#define RANGE_K2 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(58, 65)         //k2
		#define RANGE_K3 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(106, 114)        //k3
		#define RANGE_K4 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(139, 151)        //k4
		#define RANGE_K5 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(181, 189)        //k5
		#define RANGE_K6 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(0, 23)        //k6
		#define RANGE_K7 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(162, 174)          //k0
		#else
	
		#define RANGE_K0 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(208, 15)          //k0
		#define RANGE_K1 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(40, 16)         //k1
		#define RANGE_K2 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(72, 15)         //k2
		#define RANGE_K3 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(100, 12)        //k3
		#define RANGE_K4 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(132, 19)        //k4
		#define RANGE_K5 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(172, 20)        //k5
		#define RANGE_K6 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(0, 23)        //k6
		#define RANGE_K7 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6(225, 20)          //k0
		#endif
	#endif
#define KEY2RANGE(x)	RANGE_##x

#endif /* __KPD_CONFIG_H */



#else
  
#ifndef __KPD_CONFIG_H
#define __KPD_CONFIG_H

#include <order/order.h>

/* define adc range */
#define KPD_VOL_REF 3300 // mV
#define KPD_ADC_SAMPLE_MAX8 255 
#define KPD_ADC_SAMPLE_MAX6 63 
#define KPD_COV_AD8(vol)	((int )(vol * 1000 * KPD_ADC_SAMPLE_MAX8)/KPD_VOL_REF)
#define KPD_COV_AD6(vol)	((int )(vol * 1000 * KPD_ADC_SAMPLE_MAX6)/KPD_VOL_REF)

#if (CONFIG_KPD_ADC_COUNT == 2)
	#ifndef KPD_ADC_INDEX0
		#define KPD_ADC_INDEX0 0
	#endif /* KPD_ADC_INDEX0 */
	#ifndef KPD_ADC_INDEX1
		#define KPD_ADC_INDEX1 1
	#endif /* KPD_ADC_INDEX1 */
#else
	#ifndef KPD_ADC_INDEX0
	#define KPD_ADC_INDEX0 0
	#endif /* KPD_ADC_INDEX0 */
	#ifndef KPD_ADC_INDEX1
		#define KPD_ADC_INDEX1 0
	#endif /* KPD_ADC_INDEX1 */
#endif

#ifndef RESOLUTION_POWER
# if (CONFIG_KPD_ADC_COUNT == 2) && (KPD_ADC_INDEX0 == KPD_ADC_INDEX1)
#  define RESOLUTION_POWER 6
# else
#  define RESOLUTION_POWER 8
# endif
#endif

#if ( RESOLUTION_POWER == 8 )
# define KPD_COV_AD KPD_COV_AD8
#else
# define KPD_COV_AD KPD_COV_AD6
#endif

// #if  (BOOT_SPI_RRJ_ID == RTD293X_TV036_216_ddr256MB) // defined(RTD293X_TV036_216_ddr256MB)//def RTD_IC2938
#if  ( KPD_ADC_INDEX0 != KPD_ADC_INDEX1 ) // defined(RTD293X_TV036_216_ddr256MB)//def RTD_IC2938

/* keypad voltage define K0 */
#if !(defined(KPD_VOLTAGE_MIN_K0) && defined(KPD_VOLTAGE_MAX_K0))
#define KPD_VOLTAGE_MIN_K0 (0)
#define KPD_VOLTAGE_MAX_K0 (0.4)
#endif

/* keypad voltage define K1 */
#if !(defined(KPD_VOLTAGE_MIN_K1) && defined(KPD_VOLTAGE_MAX_K1))
#define KPD_VOLTAGE_MIN_K1 (0.4)
#define KPD_VOLTAGE_MAX_K1 (1.2)
#endif

/* keypad voltage define K2 */
#if !(defined(KPD_VOLTAGE_MIN_K2) && defined(KPD_VOLTAGE_MAX_K2))
#define KPD_VOLTAGE_MIN_K2 (1.2)
#define KPD_VOLTAGE_MAX_K2 (2.0)
#endif

/* keypad voltage define K3 */
#if !(defined(KPD_VOLTAGE_MIN_K3) && defined(KPD_VOLTAGE_MAX_K3))
#define KPD_VOLTAGE_MIN_K3 (2.0)
#define KPD_VOLTAGE_MAX_K3 (2.8)
#endif

/* keypad voltage define K4 */
#if !(defined(KPD_VOLTAGE_MIN_K4) && defined(KPD_VOLTAGE_MAX_K4))
#define KPD_VOLTAGE_MIN_K4 (0)
#define KPD_VOLTAGE_MAX_K4 (0.4)
#endif

/* keypad voltage define K5 */
#if !(defined(KPD_VOLTAGE_MIN_K5) && defined(KPD_VOLTAGE_MAX_K5))
#define KPD_VOLTAGE_MIN_K5 (0.4)
#define KPD_VOLTAGE_MAX_K5 (1.2)
#endif

/* keypad voltage define K6 */
#if !(defined(KPD_VOLTAGE_MIN_K6) && defined(KPD_VOLTAGE_MAX_K6))
#define KPD_VOLTAGE_MIN_K6 (1.2)
#define KPD_VOLTAGE_MAX_K6 (2.0)
#endif

/* keypad voltage define K7 */
#if !(defined(KPD_VOLTAGE_MIN_K7) && defined(KPD_VOLTAGE_MAX_K7))
#define KPD_VOLTAGE_MIN_K7 (2.0)
#define KPD_VOLTAGE_MAX_K7 (2.8)
#endif

#ifndef KPD_ADC_INDEX0
#define KPD_ADC_INDEX0 0 
#endif /* KPD_ADC_INDEX0 */
#ifndef KPD_ADC_INDEX1
#define KPD_ADC_INDEX1 1 
#endif /* KPD_ADC_INDEX0 */

#if ( KPD_ADC_INDEX0 == 1 )
#define KPD_COV_AD0 KPD_COV_AD6
#define KPD_COV_AD1 KPD_COV_AD8
#define LSADCPORT0 RTD293X_QFP216_PIN_199_LSADC_VOLTAGE_6
#define LSADCPORT1 RTD293X_QFP216_PIN_200_LSADC_VOLTAGE_7
#else
#define KPD_COV_AD0 KPD_COV_AD8
//#define KPD_COV_AD1 KPD_COV_AD6
#define KPD_COV_AD1 KPD_COV_AD8//modify by liyongjie at 2017-12-7 20:38:53
#endif /* KPD_ADC_INDEX0 == 1 */

#ifndef LSADCPORT0
#define LSADCPORT0 RTD293X_QFP216_PIN_200_LSADC_VOLTAGE_7
#endif /* LSADCPORT0 */

#ifndef LSADCPORT1
#define LSADCPORT1 RTD293X_QFP216_PIN_199_LSADC_VOLTAGE_6
#endif /* LSADCPORT1 */

#else /* BOOT_SPI_RRJ_ID == RTD293X_TV036_216_ddr256MB */
	
/* keypad voltage define K0 */
#if !(defined(KPD_VOLTAGE_MIN_K0) && defined(KPD_VOLTAGE_MAX_K0))
#define KPD_VOLTAGE_MIN_K0 (2.5)
#define KPD_VOLTAGE_MAX_K0 (2.9)
#endif

/* keypad voltage define K1 */
#if !(defined(KPD_VOLTAGE_MIN_K1) && defined(KPD_VOLTAGE_MAX_K1))
#define KPD_VOLTAGE_MIN_K1 (0.3)
#define KPD_VOLTAGE_MAX_K1 (0.8)
#endif

/* keypad voltage define K2 */
#if !(defined(KPD_VOLTAGE_MIN_K2) && defined(KPD_VOLTAGE_MAX_K2))
#define KPD_VOLTAGE_MIN_K2 (1.2)
#define KPD_VOLTAGE_MAX_K2 (1.6)
#endif

/* keypad voltage define K3 */
#if !(defined(KPD_VOLTAGE_MIN_K3) && defined(KPD_VOLTAGE_MAX_K3))
#define KPD_VOLTAGE_MIN_K3 (1.6)
#define KPD_VOLTAGE_MAX_K3 (2.1)
#endif

/* keypad voltage define K4 */
#if !(defined(KPD_VOLTAGE_MIN_K4) && defined(KPD_VOLTAGE_MAX_K4))
#define KPD_VOLTAGE_MIN_K4 (2.1)
#define KPD_VOLTAGE_MAX_K4 (2.5)
#endif

/* keypad voltage define K5 */
#if !(defined(KPD_VOLTAGE_MIN_K5) && defined(KPD_VOLTAGE_MAX_K5))
#define KPD_VOLTAGE_MIN_K5 (0.8)
#define KPD_VOLTAGE_MAX_K5 (1.2)
#endif

/* keypad voltage define K6 */
#if !(defined(KPD_VOLTAGE_MIN_K6) && defined(KPD_VOLTAGE_MAX_K6))
#define KPD_VOLTAGE_MIN_K6 (0)
#define KPD_VOLTAGE_MAX_K6 (0.3)
#endif

/* keypad voltage define K7 */
#if !(defined(KPD_VOLTAGE_MIN_K7) && defined(KPD_VOLTAGE_MAX_K7))
#define KPD_VOLTAGE_MIN_K7 (2.9)
#define KPD_VOLTAGE_MAX_K7 (3.2)
#endif

#ifndef KPD_ADC_INDEX0
#define KPD_ADC_INDEX0 0 
#endif /* KPD_ADC_INDEX0 */
#ifndef KPD_ADC_INDEX1
#define KPD_ADC_INDEX1 0 
#endif /* KPD_ADC_INDEX1 */

#if ( KPD_ADC_INDEX0 == 1 )
#define KPD_COV_AD0 KPD_COV_AD6
#define KPD_COV_AD1 KPD_COV_AD6
#define LSADCPORT0 RTD293X_QFP216_PIN_200_LSADC_VOLTAGE_7
#define LSADCPORT1 RTD293X_QFP216_PIN_200_LSADC_VOLTAGE_7
#else
#define KPD_COV_AD0 KPD_COV_AD8
#define KPD_COV_AD1 KPD_COV_AD8
#if ( CONFIG_KPD_ADC_COUNT == 2 )
#define LSADCPORT0 RTD293X_QFP216_PIN_199_LSADC_VOLTAGE_6
#define LSADCPORT1 RTD293X_QFP216_PIN_199_LSADC_VOLTAGE_6
#endif
#endif /* KPD_ADC_INDEX0 != 1 */

#ifndef LSADCPORT0
#define LSADCPORT0 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6
#endif /* LSADCPORT0 */

#ifndef LSADCPORT1
#define LSADCPORT1 RTD293X_QFP128_PIN_112_LSADC_VOLTAGE_6
#endif /* LSADCPORT1 */

#endif /* BOOT_SPI_RRJ_ID != RTD293X_TV036_216_ddr256MB */

#ifndef KPD_SENSITIVE_VAL
#define KPD_SENSITIVE_VAL 60
#endif /* KPD_SENSITIVE_VAL */

#define KPD_VOLTAGE_RANGE_K0 ( KPD_VOLTAGE_MAX_K0 - KPD_VOLTAGE_MIN_K0 )
#define KPD_VOLTAGE_RANGE_K1 ( KPD_VOLTAGE_MAX_K1 - KPD_VOLTAGE_MIN_K1 )
#define KPD_VOLTAGE_RANGE_K2 ( KPD_VOLTAGE_MAX_K2 - KPD_VOLTAGE_MIN_K2 )
#define KPD_VOLTAGE_RANGE_K3 ( KPD_VOLTAGE_MAX_K3 - KPD_VOLTAGE_MIN_K3 )
#define KPD_VOLTAGE_RANGE_K4 ( KPD_VOLTAGE_MAX_K4 - KPD_VOLTAGE_MIN_K4 )
#define KPD_VOLTAGE_RANGE_K5 ( KPD_VOLTAGE_MAX_K5 - KPD_VOLTAGE_MIN_K5 )
#define KPD_VOLTAGE_RANGE_K6 ( KPD_VOLTAGE_MAX_K6 - KPD_VOLTAGE_MIN_K6 )
#define KPD_VOLTAGE_RANGE_K7 ( KPD_VOLTAGE_MAX_K7 - KPD_VOLTAGE_MIN_K7 )
#define RANGE_K0 LSADCPORT0(KPD_COV_AD(KPD_VOLTAGE_MIN_K0), KPD_COV_AD(KPD_VOLTAGE_RANGE_K0))       //k0
#define RANGE_K1 LSADCPORT0((KPD_COV_AD(KPD_VOLTAGE_MIN_K1), KPD_COV_AD(KPD_VOLTAGE_RANGE_K1))     //k1
#define RANGE_K2 LSADCPORT0(KPD_COV_AD(KPD_VOLTAGE_MIN_K2), KPD_COV_AD(KPD_VOLTAGE_RANGE_K2))     //k2
#define RANGE_K3 LSADCPORT0(KPD_COV_AD(KPD_VOLTAGE_MIN_K3), KPD_COV_AD(KPD_VOLTAGE_RANGE_K3))     //k3
#define RANGE_K4 LSADCPORT1(KPD_COV_AD(KPD_VOLTAGE_MIN_K4), KPD_COV_AD(KPD_VOLTAGE_RANGE_K4))      //k4
#define RANGE_K5 LSADCPORT1(KPD_COV_AD(KPD_VOLTAGE_MIN_K5), KPD_COV_AD(KPD_VOLTAGE_RANGE_K5))      //k5
#define RANGE_K6 LSADCPORT1(KPD_COV_AD(KPD_VOLTAGE_MIN_K6), KPD_COV_AD(KPD_VOLTAGE_RANGE_K6))    //k6
#define RANGE_K7 LSADCPORT1(KPD_COV_AD(KPD_VOLTAGE_MIN_K7), KPD_COV_AD(KPD_VOLTAGE_RANGE_K7))          //k0


/* made a adc range define with Pin 184 */
#define KEY2RANGE(x)	RANGE_##x

/* 
 *  logx notice:
 *	I will made a keypad define
 *		#define K0	CMD_KPD_SOURCE
 *		#define K1	CMD_KPD_MENU
 *		#define K2	CMD_KPD_LEFT
 *		#define K3	CMD_KPD_RIGHT
 *		#define K4	CMD_KPD_UP
 *		#define K5	CMD_KPD_DOWN
 *		#define K6	CMD_POWER
 *	Then :	
 *		#define LOG_PWR  KEY2RANGE(K6)
 *	
*/

#endif /* __KPD_CONFIG_H */
#endif
