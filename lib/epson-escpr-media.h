/*_______________________________  epson-escpr-media.h   _______________________________*/

/*       1         2         3         4         5         6         7         8        */
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*******************************************|********************************************/
/*
 *   Copyright (c) 2009  Seiko Epson Corporation                 All rights reserved.
 *
 *   Copyright protection claimed includes all forms and matters of
 *   copyrightable material and information now allowed by statutory or judicial
 *   law or hereinafter granted, including without limitation, material generated
 *   from the software programs which are displayed on the screen such as icons,
 *   screen display looks, etc.
 *
 */

/*******************************************|********************************************/
/*                                                                                      */
/*                             Epson ESC/PR Media Information                           */
/*                                                                                      */
/*******************************************|********************************************/
#ifndef __EPSON_ESCPR_MEDIA_H__
#define __EPSON_ESCPR_MEDIA_H__
#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------- Local Compiler Switch --------------------------------*/
/*******************************************|********************************************/

/*------------------------------------  Includes   -------------------------------------*/
/*******************************************|********************************************/
#include "epson-typedefs.h"

/*------------------------------------- Data Types -------------------------------------*/
/*******************************************|********************************************/

/*----------------------------------  Generic Macros   ---------------------------------*/
/*******************************************|********************************************/


/*-------------  Definition of Media Size ID / Global Media Size Declarations   --------*/
/*******************************************|********************************************/
        /*** Media Size ID                                                              */
        /*** ---------------------------------------------------------------------------*/
typedef enum _tagMEDIA_SIZE_ID_ {
                                /* Dec  Hex  [      mm       ]  */
    EPS_MSID_A4             =0, /*  0  0x00  [210.000,297.000]  */
    EPS_MSID_LETTER           , /*  1  0x01  [215.900,279.400]  */
    EPS_MSID_LEGAL            , /*  2  0x02  [215.900,355.600]  */
    EPS_MSID_A5               , /*  3  0x03  [148.000,210.000]  */
    EPS_MSID_A6               , /*  4  0x04  [105.000,148.000]  */
    EPS_MSID_B5               , /*  5  0x05  [182.000,257.000]  */
    EPS_MSID_EXECUTIVE        , /*  6  0x06  [184.150,266.700]  */
    EPS_MSID_HALFLETTER       , /*  7  0x07  [139.700,215.900]  */
    EPS_MSID_PANORAMIC        , /*  8  0x08  [210.000,594.000]  */
    EPS_MSID_TRIM_4X6         , /*  9  0x09  [113.600,164.400]  */
    EPS_MSID_4X6              , /* 10  0x0A  [101.600,152.400]  */
    EPS_MSID_5X8              , /* 11  0x0B  [127.000,203.200]  */
    EPS_MSID_8X10             , /* 12  0x0C  [203.200,203.200]  */
    EPS_MSID_10X15            , /* 13  0x0D  [254.000,381.000]  */
    EPS_MSID_200X300          , /* 14  0x0E  [200.000,300.000]  */
    EPS_MSID_L                , /* 15  0x0F  [ 88.900,127.000]  */
    EPS_MSID_POSTCARD         , /* 16  0x10  [100.000,148.000]  */
    EPS_MSID_DBLPOSTCARD      , /* 17  0x11  [200.000,148.000]  */
    EPS_MSID_ENV_10_L         , /* 18  0x12  [241.300,104.775]  */
    EPS_MSID_ENV_C6_L         , /* 19  0x13  [162.000,114.000]  */
    EPS_MSID_ENV_DL_L         , /* 20  0x14  [220.000,110.000]  */
    EPS_MSID_NEWEVN_L         , /* 21  0x15  [220.000,132.000]  */
    EPS_MSID_CHOKEI_3         , /* 22  0x16  [120.000,235.000]  */
    EPS_MSID_CHOKEI_4         , /* 23  0x17  [ 90.000,205.000]  */
    EPS_MSID_YOKEI_1          , /* 24  0x18  [120.000,176.000]  */
    EPS_MSID_YOKEI_2          , /* 25  0x19  [114.000,162.000]  */
    EPS_MSID_YOKEI_3          , /* 26  0x1A  [ 98.000,148.000]  */
    EPS_MSID_YOKEI_4          , /* 27  0x1B  [105.000,235.000]  */
    EPS_MSID_2L               , /* 28  0x1C  [127.000,177.800]  */
    EPS_MSID_ENV_10_P         , /* 29  0x1D  [104.775,241.300]  */
    EPS_MSID_ENV_C6_P         , /* 30  0x1E  [114.000,162.000]  */
    EPS_MSID_ENV_DL_P         , /* 31  0x1F  [110.000,220.000]  */
    EPS_MSID_NEWENV_P         , /* 32  0x20  [132.000,220.000]  */
    EPS_MSID_MEISHI           , /* 33  0x21  [ 89.000, 55.000]  */
    EPS_MSID_BUZCARD_89X50    , /* 34  0x22  [ 89.000, 50.000]  */
    EPS_MSID_CARD_54X86       , /* 35  0x23  [ 54.000, 86.000]  */
    EPS_MSID_BUZCARD_55X91    , /* 36  0x24  [ 55.000, 91.000]  */
    EPS_MSID_ALBUM_L          , /* 37  0x25  [127.000,198.000]  */
    EPS_MSID_ALBUM_A5         , /* 38  0x26  [210.000,321.000]  */
    EPS_MSID_PALBUM_L_L       , /* 39  0x27  [127.000  89.000]  */
    EPS_MSID_PALBUM_2L        , /* 40  0x28  [127.000,177.900]  */
    EPS_MSID_PALBUM_A5_L      , /* 41  0x29  [210.000,148.300]  */
    EPS_MSID_PALBUM_A4        , /* 42  0x2A  [210.000,296.300]  */
    EPS_MSID_HIVISION         , /* 43  0x2B  [101.600,180.600]  */
    EPS_MSID_KAKU_2           , /* 44  0x2C  [240.000,332.000]  */
    EPS_MSID_ENV_C4_P         , /* 45  0x2D  [229.000,324.000]  */
    EPS_MSID_B6               , /* 46  0x2E  [128.000,182.000]  */
    EPS_MSID_KAKU_20          , /* 47  0x2F  [229.000,324.000]  */
    EPS_MSID_A5_24HOLE        , /* 48  0x30  [148.000,210.000]  */
	EPS_MSID_CHOKEI_40     =52, /* 52  0x34  [ 90.000,225.000]  */
	EPS_MSID_QUADRAPLEPOSTCARD, /* 53  0x35  [200.000,296.000]  */
	EPS_MSID_YOKEI_0,			/* 54  0x36  [120.000,235.000]  */
    EPS_MSID_ENV_C5_P	   =56, /* 56  0x38  [162.000,229.000]  */
	EPS_MSID_YOKEI_6		  ,	/* 57  0x39  [ 98.000,190.000]  */
	EPS_MSID_MEXICO_OFICIO	  ,	/* 58  0x3A  [215.900,340.400]  */
	EPS_MSID_OFICIO9		  ,	/* 59  0x3B  [214.900,315.000]  */
	EPS_MSID_INDIAN_LEGAL	  ,	/* 60  0x3C  [215.000,345.000]  */
    EPS_MSID_A3NOBI           , /* 61  0x3D  [329.000,483.000]  */
    EPS_MSID_A3               , /* 62  0x3E  [297.000,420.000]  */
    EPS_MSID_B4               , /* 63  0x3F  [257.000,364.000]  */
    EPS_MSID_USB              , /* 64  0x40  [279.400,431.800]  */
    EPS_MSID_11X14            , /* 65  0x41  [279.400,355.600]  */
    EPS_MSID_B3               , /* 66  0x42  [364.000,515.000]  */
    EPS_MSID_A2               , /* 67  0x43  [420.000,594.000]  */
    EPS_MSID_USC              , /* 68  0x44  [431.800,558.800]  */
    EPS_MSID_10X12            , /* 69  0x45  [254.000,304.800]  */
    EPS_MSID_12X12            , /* 70  0x46  [304.800,304.800]  */
	EPS_MSID_SP1			  , /* 71  0x47  [210.000,270.000]  */
	EPS_MSID_SP2              , /* 72  0x48  [210.000,149.000]  */
	EPS_MSID_SP3              , /* 73  0x49  [100.000,170.000]  */
	EPS_MSID_SP4              , /* 74  0x4A  [130.000,182.000]  */
	EPS_MSID_SP5              , /* 75  0x4B  [192.000,132.000]  */
	EPS_MSID_16K              , /* 76  0x4C  [195.000,270.000]  */
	EPS_MSID_8K               , /* 77  0x4D  [270.000,390.000]  */
	EPS_MSID_SRA3          =84, /* 84  0x54  [320.000,450.000]  */
	EPS_MSID_12X18			  , /* 85  0x55  [304.800,457.200]  */
	EPS_MSID_8_5X13			  , /* 86  0x56  [215.900,330.200]  */
	EPS_MSID_SQUARE_8_27	  , /* 87  0x57  [210.000,210.000]  */
	EPS_MSID_SQUARE_5		  , /* 88  0x58  [127.000,127.000]  */
    EPS_MSID_USER          =99, /* 99  0x63  [  0.000,  0.000]  */
    EPS_MSID_8X10_5       =104, /*104  0x68  [203.200,266.700]  */
    EPS_MSID_8_27X13      =106, /*106  0x6A  [210.000,330.000]  */
    EPS_MSID_ENV_B5_P     =111, /*111  0x6F  [176.000,250.000]  */
    EPS_MSID_BANNER       =113, /*113  0x71  [297.000,900.000]  */
    EPS_MSID_SQUARE_3_5   =116, /*116  0x74  [ 89.000, 89.000]  */
    EPS_MSID_8X12             , /*117  0x75  [203.000,305.000]  */
    EPS_MSID_SQUARE_6         , /*118  0x76  [152.000,152.000]  */
    EPS_MSID_4X8              , /*119  0x77  [102.000,203.000]  */
    EPS_MSID_7X10             , /*120  0x78  [178.000,254.800]  */
    EPS_MSID_3_5X2            , /*121  0x79  [ 89.000, 50.800]  */
    EPS_MSID_6X2              , /*122  0x7A  [152.000, 50.800]  */
    EPS_MSID_8X5              , /*123  0x7B  [203.200,127.000]  */
    EPS_MSID_6X4              , /*124  0x7C  [152.400,101.600]  */
    EPS_MSID_8X4              , /*125  0x7D  [203.200,101.600]  */
    EPS_MSID_HALFCUT      =128, /*128  0x80  [356.000,432.000]  */
    EPS_MSID_16X20            , /*129  0x81  [406.400,508.000]  */
	EPS_MSID_17X24        =141, /*141  0x8D  [431.800,609.600]  */
	EPS_MSID_30X40CM      =150, /*150  0x96  [300.000,400.000]  */
	EPS_MSID_40X60CM          , /*151  0x97  [400.000,600.000]  */
	EPS_MSID_ARCH_A       =153, /*153  0x99  [228.600,304.800]  */
	EPS_MSID_ARCH_B           , /*154  0x9A  [304.800,457.200]  */
	EPS_MSID_A3WNOBI      =157, /*157  0x9D  [329.000,559.000]  */
    EPS_MSID_UNKNOWN       =0xff/* unknown                      */
} MEDIA_SIZE_ID;

        /*** Media Data Struct                                                          */
        /*** ---------------------------------------------------------------------------*/
typedef struct _tagEPS_MEDIA_INFO_ {
    EPS_INT32 id;
    EPS_INT32 paper_x;
    EPS_INT32 paper_y;
    EPS_INT32 print_area_x_border;
    EPS_INT32 print_area_y_border;
    EPS_INT16 left_margin_borderless;
    EPS_INT16 top_margin_borderless;
    EPS_INT32 print_area_x_borderless;
    EPS_INT32 print_area_y_borderless;
} EPS_MEDIA_INFO;

        /*** Media Size Information (360dpi)                                            */
        /*** ---------------------------------------------------------------------------*/
static const EPS_MEDIA_INFO epsMediaSize[] = {
/*          ID          	PaperW/L    3mm W/L     0mm L/T   0mm W/L   */
{	EPS_MSID_A4, 			2976, 4209, 2892, 4125, -36, -42, 3048, 4321 },
{	EPS_MSID_LETTER, 		3060, 3960, 2976, 3876, -36, -42, 3132, 4072 },
{	EPS_MSID_LEGAL, 		3060, 5040, 2976, 4956, -36, -42, 3132, 5152 },
{	EPS_MSID_A5, 			2098, 2976, 2014, 2892, -36, -42, 2170, 3088 },
{	EPS_MSID_A6, 			1488, 2098, 1404, 2014, -36, -42, 1560, 2210 },
{	EPS_MSID_B5, 			2580, 3643, 2496, 3559, -36, -42, 2652, 3755 },
{	EPS_MSID_EXECUTIVE, 	2611, 3780, 2527, 3696, -36, -42, 2683, 3892 },
{	EPS_MSID_HALFLETTER,	1980, 3060, 1896, 2976, -36, -42, 2052, 3172 },
{	EPS_MSID_PANORAMIC, 	2976, 8419, 2892, 8335, -36, -42, 3048, 8531 },
{	EPS_MSID_TRIM_4X6, 		1610, 2330, 1526, 2246, -36, -42, 1682, 2442 },
{	EPS_MSID_4X6, 			1440, 2160, 1356, 2076, -36, -42, 1512, 2272 },
{	EPS_MSID_5X8, 			1800, 2880, 1716, 2796, -36, -42, 1872, 2992 },
{	EPS_MSID_8X10, 			2880, 3600, 2796, 3516, -36, -42, 2952, 3712 },
{	EPS_MSID_10X15, 		1417, 2125, 1333, 2041, -36, -42, 1489, 2237 },
{	EPS_MSID_200X300, 		3061, 4790, 2977, 4706, -36, -42, 3133, 4902 },
{	EPS_MSID_L, 			1261, 1800, 1177, 1716, -36, -42, 1333, 1912 },
{	EPS_MSID_POSTCARD, 		1417, 2098, 1333, 2014, -36, -42, 1489, 2210 },
{	EPS_MSID_DBLPOSTCARD,	2835, 2098, 2751, 2014, -36, -42, 2907, 2210 },
{	EPS_MSID_ENV_10_L, 		3420, 1485, 3336, 1401, -36, -42, 3492, 1597 },
{	EPS_MSID_ENV_C6_L, 		2296, 1616, 2212, 1532, -36, -42, 2368, 1728 },
{	EPS_MSID_ENV_DL_L, 		3118, 1559, 3034, 1475, -36, -42, 3190, 1671 },
{	EPS_MSID_NEWEVN_L, 		3118, 1871, 3034, 1787, -36, -42, 3190, 1983 },
{	EPS_MSID_CHOKEI_3, 		1701, 3331, 1561, 3006, -36, -42, 1773, 3443 },
{	EPS_MSID_CHOKEI_4, 		1276, 2906, 1136, 2581, -36, -42, 1348, 3018 },
{	EPS_MSID_YOKEI_1, 		1701, 2494, 1561, 2169, -36, -42, 1773, 2606 },
{	EPS_MSID_YOKEI_2, 		1616, 2296, 1476, 1971, -36, -42, 1688, 2408 },
{	EPS_MSID_YOKEI_3, 		1389, 2098, 1249, 1773, -36, -42, 1461, 2210 },
{	EPS_MSID_YOKEI_4, 		1488, 3331, 1348, 3006, -36, -42, 1560, 3443 },
{	EPS_MSID_2L, 			1800, 2522, 1716, 2438, -36, -42, 1872, 2634 },
{	EPS_MSID_ENV_10_P, 		1485, 3420, 1345, 3095, -36, -42, 1557, 3532 },
{	EPS_MSID_ENV_C6_P, 		1616, 2296, 1476, 1971, -36, -42, 1688, 2408 },
{	EPS_MSID_ENV_DL_P, 		1559, 3118, 1419, 2793, -36, -42, 1631, 3230 },
{	EPS_MSID_NEWENV_P, 		1871, 3118, 1731, 2793, -36, -42, 1943, 3230 },
{	EPS_MSID_MEISHI, 		1261, 779, 1177, 695, -36, -42, 1333, 891 },
{	EPS_MSID_BUZCARD_89X50,	1261, 709, 1177, 625, -36, -42, 1333, 821 },
{	EPS_MSID_CARD_54X86,765,1219, 681, 1135, -36, -42, 837, 1331 },
{	EPS_MSID_BUZCARD_55X91,	780, 1290, 696, 1206, -36, -42, 852, 1402 },
{	EPS_MSID_ALBUM_L, 		1800, 2607, 1716, 2523, -36, -42, 1872, 2719 },
{	EPS_MSID_ALBUM_A5, 		2976, 4294, 2892, 4210, -36, -42, 3048, 4406 },
{	EPS_MSID_PALBUM_L_L,	1800, 1260, 1716, 1176, -36, -42, 1872, 1372 },
{	EPS_MSID_PALBUM_2L,		1800, 2521, 1716, 2437, -36, -42, 1872, 2633 },
{	EPS_MSID_PALBUM_A5_L,	2976, 2101, 2892, 2017, -36, -42, 3048, 2213 },
{	EPS_MSID_PALBUM_A4,		2976, 4203, 2892, 4119, -36, -42, 3048, 4315 },
{	EPS_MSID_HIVISION, 		1440, 2560, 1356, 2476, -36, -42, 1512, 2672 },
{	EPS_MSID_KAKU_2, 		3401, 4705, 2977, 4380, -36, -42, 3473, 4817 },
{	EPS_MSID_ENV_C4_P, 		3245, 4592, 2977, 4267, -36, -42, 3317, 4704 },
{	EPS_MSID_B6, 			1814, 2580, 1730, 2496, -48, -42, 1910, 2692 },
{	EPS_MSID_KAKU_20, 		3245, 4592, 2977, 4267, -36, -42, 3317, 4704 },
{	EPS_MSID_A5_24HOLE,		2098, 2976, 1816, 2694, -36, -42, 2170, 3088 },
{	EPS_MSID_CHOKEI_40,		1276, 3189, 1136, 2736, -36, -42, 1348, 3301 },
{	EPS_MSID_QUADRAPLEPOSTCARD, 2835, 4195, 2751, 4111, -36, -42, 2907, 4307 },
{	EPS_MSID_YOKEI_0, 		1701, 3331, 1561, 3006, -36, -42, 1773, 3443 },
{	EPS_MSID_ENV_C5_P, 		2296, 3246, 2156, 2921, -36, -42, 2368, 3358 },
{	EPS_MSID_YOKEI_6, 		1389, 2693, 1249, 2368, -36, -42, 1461, 2805 },
{	EPS_MSID_MEXICO_OFICIO, 3060, 4825, 2976, 4741, -36, -42, 3132, 4937 },
{	EPS_MSID_OFICIO9, 		3046, 4465, 2962, 4381, -36, -42, 3118, 4577 },
{	EPS_MSID_INDIAN_LEGAL, 	3047, 4890, 2963, 4806, -36, -42, 3119, 5002 },
{	EPS_MSID_A3NOBI, 		4663, 6846, 4579, 6762, -48, -42, 4759, 6958 },
{	EPS_MSID_A3, 			4209, 5953, 4125, 5869, -48, -42, 4305, 6065 },
{	EPS_MSID_B4, 			3643, 5159, 3559, 5075, -48, -42, 3739, 5271 },
{	EPS_MSID_USB, 			3960, 6120, 3876, 6036, -48, -42, 4056, 6232 },
{	EPS_MSID_11X14, 		3960, 5040, 3876, 4956, -48, -42, 4056, 5152 },
{	EPS_MSID_B3, 			5159, 7299, 5075, 7215, -48, -42, 5255, 7411 },
{	EPS_MSID_A2, 			5953, 8419, 5869, 8335, -48, -42, 6049, 8531 },
{	EPS_MSID_USC, 			6120, 7920, 6036, 7836, -48, -42, 6216, 8032 },
{	EPS_MSID_10X12, 		3600, 4320, 3516, 4236, -48, -42, 3696, 4432 },
{	EPS_MSID_12X12, 		4320, 4320, 4236, 4236, -48, -42, 4416, 4432 },
{	EPS_MSID_SP1, 			2976, 3827, 2892, 3743, -36, -42, 3048, 3939 },
{	EPS_MSID_SP2, 			2976, 2112, 2892, 2028, -36, -42, 3048, 2224 },
{	EPS_MSID_SP3, 			1417, 2409, 1333, 2325, -36, -42, 1489, 2521 },
{	EPS_MSID_SP4, 			1843, 2580, 1759, 2496, -36, -42, 1915, 2692 },
{	EPS_MSID_SP5, 			2721, 1871, 2637, 1787, -36, -42, 2793, 1983 },
{	EPS_MSID_16K, 			2764, 3827, 2680, 3743, -36, -42, 2836, 3939 },
{	EPS_MSID_8K, 			3827, 5528, 3743, 5444, -36, -42, 3899, 5640 },
{	EPS_MSID_SRA3, 			4535, 6378, 4451, 6294, -36, -42, 4607, 6490 },
{	EPS_MSID_12X18, 		4320, 6480, 4236, 6396, -36, -42, 4416, 6592 },
{	EPS_MSID_8_5X13, 		3060, 4680, 2976, 4596, -36, -42, 3132, 4792 },
{	EPS_MSID_SQUARE_8_27,	2976, 2976, 2892, 2892, -36, -42, 3048, 3088 },
{	EPS_MSID_SQUARE_5,		1800, 1800, 1716, 1716, -36, -42, 1872, 1912 },
{   EPS_MSID_USER,             0,    0,    0,    0, -36, -42,    0,    0 },
{	EPS_MSID_8X10_5,        2880, 3780, 2796, 3696, -36, -42, 2952, 3892 },
{	EPS_MSID_8_27X13,       2976, 4678, 2892, 4594, -36, -42, 3048, 4790 },
{	EPS_MSID_ENV_B5_P,      2494, 3543, 2354, 3218, -36, -42, 2566, 3655 },
{	EPS_MSID_BANNER, 		4209, 12756, 4125,12672,-36, -42, 4281,12868 },
{	EPS_MSID_SQUARE_3_5,    1260, 1260, 1176, 1176, -36, -42, 1332, 1372 },
{	EPS_MSID_8X12,          2880, 4320, 2796, 4236, -36, -42, 2952, 4432 },
{	EPS_MSID_SQUARE_6,      2160, 2160, 2076, 2076, -36, -42, 2232, 2272 },
{	EPS_MSID_4X8,           1440, 2880, 1356, 2796, -36, -42, 1512, 2992 },
{	EPS_MSID_7X10,          2522, 3600, 2438, 3516, -36, -42, 2592, 3712 },
{	EPS_MSID_3_5X2,         1261,  720, 1177,  636, -36, -42, 1333,  832 },
{	EPS_MSID_6X2,           2160,  720, 2076,  636, -36, -42, 2232,  832 },
{	EPS_MSID_8X5,           2880, 1800, 2796, 1716, -36, -42, 2952, 1912 },
{	EPS_MSID_6X4,           2160, 1440, 2076, 1356, -36, -42, 2232, 1552 },
{	EPS_MSID_8X4,           2880, 1440, 2796, 1356, -36, -42, 2952, 1552 },
{	EPS_MSID_HALFCUT, 		5040, 6120, 4956, 6036, -36, -42, 5112, 6232 },
{	EPS_MSID_16X20, 		5760, 7200, 5676, 7116, -36, -42, 5832, 7312 },
{	EPS_MSID_17X24,         6120, 8646, 6036, 8562, -48, -42, 6216, 8758 },
{	EPS_MSID_30X40CM,       4252, 5669, 4168, 5585, -48, -42, 4348, 5781 },
{	EPS_MSID_40X60CM,       5669, 8504, 5585, 8420, -48, -42, 5765, 8616 },
{	EPS_MSID_ARCH_A,        3240, 4320, 3156, 4236, -48, -42, 3336, 4432 },
{	EPS_MSID_ARCH_B,        4320, 6480, 4236, 6396, -48, -42, 4416, 6592 },
{	EPS_MSID_A3WNOBI,       4663, 7923, 4579, 7839, -48, -42, 4759, 8035 },
{   -1,                         0,   0,    0,    0,   0,   0,    0,    0 }
};

#define EPS_NUM_MEDIA_SIZES     sizeof(epsMediaSize)/sizeof(EPS_MEDIA_INFO)


        /*** Media Size Information (300dpi)                                            */
        /*** ---------------------------------------------------------------------------*/
static const EPS_MEDIA_INFO epsMediaSize300[] = {
/*          ID              PaperW/L    3mm W/L     0mm L/T   0mm W/L   */
{	EPS_MSID_A4, 			2480, 3507, 2410, 3437, -30, -35, 2540, 3601 },
{	EPS_MSID_LETTER, 		2550, 3300, 2480, 3230, -30, -35, 2610, 3394 },
{	EPS_MSID_LEGAL, 		2550, 4200, 2480, 4130, -30, -35, 2610, 4294 },
{	EPS_MSID_A5, 			1748, 2480, 1678, 2410, -30, -35, 1808, 2574 },
{	EPS_MSID_A6, 			1240, 1748, 1170, 1678, -30, -35, 1300, 1842 },
{	EPS_MSID_B5, 			2149, 3035, 2079, 2965, -30, -35, 2209, 3129 },
{	EPS_MSID_EXECUTIVE, 	2175, 3150, 2105, 3080, -30, -35, 2235, 3244 },
{	EPS_MSID_HALFLETTER, 	1650, 2550, 1580, 2480, -30, -35, 1710, 2644 },
{	EPS_MSID_PANORAMIC, 	2480, 7015, 2410, 6945, -30, -35, 2540, 7109 },
{	EPS_MSID_TRIM_4X6, 		1334, 1937, 1264, 1867, -30, -35, 1394, 2031 },
{	EPS_MSID_4X6, 			1200, 1800, 1130, 1730, -30, -35, 1260, 1894 },
{	EPS_MSID_5X8, 			1500, 2400, 1430, 2330, -30, -35, 1560, 2494 },
{	EPS_MSID_8X10, 			2400, 3000, 2330, 2930, -30, -35, 2460, 3094 },
{	EPS_MSID_10X15, 		1181, 1171, 1111, 1101, -30, -35, 1241, 1265 },
{	EPS_MSID_200X300, 		2362, 3543, 2292, 3473, -30, -35, 2422, 3637 },
{	EPS_MSID_L, 			1051, 1500, 981, 1430, -30, -35, 1111, 1594 },
{	EPS_MSID_POSTCARD, 		1181, 1748, 1111, 1678, -30, -35, 1241, 1842 },
{	EPS_MSID_DBLPOSTCARD, 	2362, 1748, 2292, 1678, -30, -35, 2422, 1842 },
{	EPS_MSID_ENV_10_L, 		2850, 1238, 2780, 1168, -30, -35, 2910, 1332 },
{	EPS_MSID_ENV_C6_L, 		1913, 1346, 1843, 1276, -30, -35, 1973, 1440 },
{	EPS_MSID_ENV_DL_L, 		2598, 1299, 2528, 1229, -30, -35, 2658, 1393 },
{	EPS_MSID_NEWEVN_L, 		2598, 1535, 2528, 1465, -30, -35, 2658, 1629 },
{	EPS_MSID_CHOKEI_3, 		1417, 2775, 1299, 2504, -30, -35, 1477, 2869 },
{	EPS_MSID_CHOKEI_4, 		1063, 2421, 945, 2150, -30, -35, 1123, 2515 },
{	EPS_MSID_YOKEI_1, 		1417, 2078, 1299, 1807, -30, -35, 1477, 2172 },
{	EPS_MSID_YOKEI_2, 		1346, 1913, 1228, 1642, -30, -35, 1406, 2007 },
{	EPS_MSID_YOKEI_3, 		1157, 1748, 1039, 1477, -30, -35, 1217, 1842 },
{	EPS_MSID_YOKEI_4, 		1240, 2775, 1122, 2504, -30, -35, 1300, 2869 },
{	EPS_MSID_2L, 			1500, 2102, 1430, 2032, -30, -35, 1560, 2196 },
{	EPS_MSID_ENV_10_P, 		1238, 2850, 1120, 2579, -30, -35, 1298, 2944 },
{	EPS_MSID_ENV_C6_P, 		1346, 1913, 1228, 1642, -30, -35, 1406, 2007 },
{	EPS_MSID_ENV_DL_P, 		1299, 2598, 1181, 2327, -30, -35, 1359, 2692 },
{	EPS_MSID_NEWENV_P, 		1535, 2598, 1417, 2327, -30, -35, 1595, 2692 },
{	EPS_MSID_MEISHI, 		1051, 650, 981, 580, -30, -35, 1111, 744 },
{	EPS_MSID_BUZCARD_89X50, 1051, 590, 981, 520, -30, -35, 1111, 684 },
{	EPS_MSID_CARD_54X86, 	637, 1015, 567, 945, -30, -35, 697, 1109 },
{	EPS_MSID_BUZCARD_55X91, 650, 1074, 580, 1004, -30, -35, 710, 1168 },
{	EPS_MSID_ALBUM_L, 		1500, 2173, 1430, 2103, -30, -35, 1560, 2267 },
{	EPS_MSID_ALBUM_A5, 		2480, 3578, 2410, 3508, -30, -35, 2540, 3672 },
{	EPS_MSID_PALBUM_L_L, 	1500, 1051, 1430, 981, -30, -35, 1560, 1145 },
{	EPS_MSID_PALBUM_2L, 	1500, 2102, 1430, 2032, -30, -35, 1560, 2196 },
{	EPS_MSID_PALBUM_A5_L, 	2480, 1748, 2410, 1678, -30, -35, 2540, 1842 },
{	EPS_MSID_PALBUM_A4, 	2480, 3507, 2410, 3437, -30, -35, 2540, 3601 },
{	EPS_MSID_HIVISION, 		1200, 2133, 1130, 2063, -30, -35, 1260, 2227 },
{	EPS_MSID_KAKU_2, 		2834, 3921, 2480, 3650, -30, -35, 2894, 4015 },
{	EPS_MSID_ENV_C4_P, 		2704, 3826, 2480, 3555, -30, -35, 2764, 3920 },
{	EPS_MSID_B6, 			1511, 2149, 1441, 1878, -30, -35, 1571, 2243 },
{	EPS_MSID_KAKU_20, 		2704, 3826, 2480, 3555, -30, -35, 2764, 3920 },
{	EPS_MSID_A5_24HOLE, 	1748, 2480, 1513, 2410, -30, -35, 1808, 2574 },
{	EPS_MSID_CHOKEI_40, 	1062, 2657, 944, 2280, -30, -35, 1122, 2751 },
{	EPS_MSID_QUADRAPLEPOSTCARD, 2362, 3496, 2292, 3426, -30, -35, 2422, 3590 },
{	EPS_MSID_YOKEI_0, 		1417, 2775, 1299, 2504, -30, -35, 1547, 2869 },
{	EPS_MSID_ENV_C5_P, 		1913, 2704, 1795, 2433, -30, -35, 1973, 2798 },
{	EPS_MSID_YOKEI_6, 		1157, 2244, 1039, 1973, -30, -35, 1217, 2338 },
{	EPS_MSID_MEXICO_OFICIO, 2550, 4020, 2480, 3950, -30, -35, 2610, 4114 },
{	EPS_MSID_OFICIO9, 		2538, 3720, 2468, 3650, -30, -35, 2598, 3814 },
{	EPS_MSID_INDIAN_LEGAL, 	2539, 4074, 2469, 4004, -30, -35, 2599, 4168 },
{	EPS_MSID_A3NOBI, 		3885, 5704, 3815, 5634, -42, -35, 3969, 5798 },
{	EPS_MSID_A3, 			3507, 4960, 3437, 4890, -42, -35, 3591, 5054 },
{	EPS_MSID_B4, 			3035, 4299, 2965, 4229, -42, -35, 3119, 4393 },
{	EPS_MSID_USB, 			3300, 5100, 3230, 5030, -42, -35, 3384, 5194 },
{	EPS_MSID_11X14, 		3300, 4200, 3230, 4130, -42, -35, 3384, 4294 },
{	EPS_MSID_B3, 			4299, 6082, 4229, 6012, -42, -35, 4383, 6176 },
{	EPS_MSID_A2, 			4960, 7015, 4890, 6945, -42, -35, 5044, 7109 },
{	EPS_MSID_USC, 			5100, 6600, 5030, 6530, -42, -35, 5184, 6694 },
{	EPS_MSID_10X12, 		3000, 3600, 2930, 3530, -42, -35, 3084, 3694 },
{	EPS_MSID_12X12, 		3600, 3600, 3530, 3530, -42, -35, 3684, 3694 },
{	EPS_MSID_SP1, 			2480, 3188, 2410, 3118, -30, -35, 2540, 3282 },
{	EPS_MSID_SP2, 			2480, 1759, 2410, 1689, -30, -35, 2540, 1853 },
{	EPS_MSID_SP3, 			1181, 2007, 1111, 1937, -30, -35, 1241, 2101 },
{	EPS_MSID_SP4, 			1535, 2149, 1465, 2079, -30, -35, 1595, 2243 },
{	EPS_MSID_SP5, 			2267, 1559, 2197, 1489, -30, -35, 2327, 1653 },
{	EPS_MSID_16K, 			2303, 3188, 2233, 3118, -30, -35, 2363, 3282 },
{	EPS_MSID_8K, 			3188, 4606, 3118, 4536, -30, -35, 3248, 4700 },
{	EPS_MSID_SRA3, 			3779, 5314, 3709, 5244, -30, -35, 3839, 5408 },
{	EPS_MSID_12X18, 		3600, 5400, 3530, 5330, -42, -35, 3660, 5494 },
{	EPS_MSID_8_5X13, 		2550, 3900, 2480, 3830, -42, -35, 2610, 3994 },
{	EPS_MSID_SQUARE_8_27,	2480, 2480, 2410, 2410, -30, -35, 2540, 2574 },
{	EPS_MSID_SQUARE_5,		1500, 1500, 1430, 1430, -30, -35, 1560, 1594 },
{   EPS_MSID_USER,             0,    0,    0,    0, -30, -35,    0,    0 },
{	EPS_MSID_8X10_5,        2400, 3150, 2330, 3080, -30, -35, 2460, 3244 },
{	EPS_MSID_8_27X13,       2480, 3898, 2410, 3828, -30, -35, 2540, 3992 },
{	EPS_MSID_ENV_B5_P,      2078, 2953, 1960, 2682, -30, -35, 2138, 3047 },
{	EPS_MSID_BANNER, 	    3507, 10629, 3437,10559,-30, -35, 3567,10723 },
{	EPS_MSID_SQUARE_3_5,    1050, 1050,  980,  980, -30, -35, 1110, 1144 },
{	EPS_MSID_8X12,          2400, 3600, 2330, 3530, -30, -35, 2460, 3694 },
{	EPS_MSID_SQUARE_6,      1800, 1800, 1730, 1730, -30, -35, 1860, 1894 },
{	EPS_MSID_4X8,           1200, 2400, 1130, 2330, -30, -35, 1260, 2494 },
{	EPS_MSID_7X10,          2100, 3000, 2030, 2930, -30, -35, 2160, 3094 },
{	EPS_MSID_3_5X2,         1050,  600,  980,  530, -30, -35, 1110,  694 },
{	EPS_MSID_6X2,           1800,  600, 1730,  530, -30, -35, 1860,  694 },
{	EPS_MSID_8X5,           2400, 1500, 2330, 1430, -30, -35, 2460, 1594 },
{	EPS_MSID_6X4,           1800, 1200, 1730, 1130, -30, -35, 1860, 1294 },
{	EPS_MSID_8X4,           2400, 1200, 2330, 1130, -30, -35, 2460, 1294 },
{	EPS_MSID_HALFCUT, 		4200, 5100, 4130, 5030, -30, -35, 4260, 5194 },
{	EPS_MSID_16X20, 		4800, 6000, 4730, 5930, -30, -35, 4860, 6094 },
{	EPS_MSID_17X24,         5100, 7204, 5030, 7134, -42, -35, 5184, 7298 },
{	EPS_MSID_30X40CM,       3543, 4724, 3473, 4654, -42, -35, 3627, 4829 },
{	EPS_MSID_40X60CM,       4724, 7086, 4654, 7016, -42, -35, 4808, 7191 },
{	EPS_MSID_ARCH_A,        2700, 3600, 2630, 3530, -42, -35, 2784, 3705 },
{	EPS_MSID_ARCH_B,        3600, 5400, 3530, 5330, -42, -35, 3684, 5505 },
{	EPS_MSID_A3WNOBI,       3885, 6602, 3815, 6532, -42, -35, 3969, 6696 },
{   -1,                        0,    0,    0,    0,   0,   0,    0,    0 }
};

#define EPS_BORDERS_MARGIN_360	(42)
/*#define EPS_BORDERS_MARGIN_720	(84)*/
#define EPS_BORDERS_MARGIN_300	(35)
/*#define EPS_BORDERS_MARGIN_600	(70)*/

#define EPS_RIGHT_MARGIN_BORDERLESS_360	(-36)
#define EPS_BOTTOM_MARGIN_BORDERLESS_360	(-70)
#define EPS_RIGHT_MARGIN_BORDERLESS_300	(-30)
#define EPS_BOTTOM_MARGIN_BORDERLESS_300	(-58)

/* user defined size range */
#define EPS_USER_WIDTH_MIN	(35)		/* 3.5inch x 10 */
#define EPS_USER_HEIGHT_MIN	(50)		/* 5  inch x 10 */
#define EPS_USER_WIDTH_MAX1	(85)		/* 8.5inch x 10 */
#define EPS_USER_WIDTH_MAX2	(130)		/* 13 inch x 10 */
#define EPS_USER_HEIGHT_MAX	(440)		/* 44 inch x 10 */



/*-------------  Definition of Media Type ID / Global Media Type Declarations   --------*/
/*******************************************|********************************************/
        /*** Media Type ID                                                              */
        /*** ---------------------------------------------------------------------------*/
typedef enum _tagMEDIA_TYPE_ID_ {
                                /* Dec  Hex                Text Name                        */
    EPS_MTID_PLAIN          =0, /*  0  0x00,  "Plain Paper\0"                               */
    EPS_MTID_360INKJET        , /*  1  0x01,  "360dpi Ink Jet Paper \0"                     */
    EPS_MTID_IRON             , /*  2  0x02,  "Iron-On Cool Peel Transfer Paper\0"          */
    EPS_MTID_PHOTOINKJET      , /*  3  0x03,  "Photo Qaulity Ink Jet Paper #2\0"            */
    EPS_MTID_PHOTOADSHEET     , /*  4  0x04,  "Photo Qaulity Self Adhesive Sheets\0"        */
    EPS_MTID_MATTE            , /*  5  0x05,  "Matte Paper-HeavyWeight\0"                  */
    EPS_MTID_PHOTO            , /*  6  0x06,  "Photo Paper\0"                               */
    EPS_MTID_PHOTOFILM        , /*  7  0x07,  "Photo Quality Glossy Flim\0"                 */
    EPS_MTID_MINIPHOTO        , /*  8  0x08,  "Photo Stickers 4/6\0"                        */
    EPS_MTID_OHP              , /*  9  0x09,  "Ink Jet Transparencies\0                     */
    EPS_MTID_BACKLIGHT        , /* 10  0x0A,  "Back Light Film\0"                           */
    EPS_MTID_PGPHOTO          , /* 11  0x0B,  "Premium Glossy Photo Paper\0"                */
    EPS_MTID_PSPHOTO          , /* 12  0x0C,  "Premium Semigloss Photo Paper\0"             */
    EPS_MTID_PLPHOTO          , /* 13  0x0D,  "Premimum Luster Photo Paper\0"               */
    EPS_MTID_MCGLOSSY         , /* 14  0x0E,  "Glossy Paper - Photo Weight\0"               */
    EPS_MTID_ARCHMATTE        , /* 15  0xOF,  "Archival Matte Paper\0"                      */
    EPS_MTID_WATERCOLOR       , /* 16  0x10,  "Water Paper-Radiant White\0"                 */
    EPS_MTID_PROGLOSS         , /* 17  0x11,  "Professional Glossy Paper\0"                 */
    EPS_MTID_MATTEBOARD       , /* 18  0x12,  "Matte Board Paper\0"                         */
    EPS_MTID_PHOTOGLOSS       , /* 19  0x13,  "Photo Quality Glossy Paper\0"                */
    EPS_MTID_SEMIPROOF        , /* 20  0x14,  "Dupont/EPSON Semigloss Proofing Paper-A\0"   */
    EPS_MTID_SUPERFINE2       , /* 21  0x15,  "Super Fine Paper -2\0"                       */
    EPS_MTID_DSMATTE          , /* 22  0x16,  "Double Sided Matte Paper\0"                  */
    EPS_MTID_CLPHOTO          , /* 23  0x17,  "ColorLife Photo Paper\0"                     */
    EPS_MTID_ECOPHOTO         , /* 24  0x18,  "Economy Photo Paper\0"                       */
    EPS_MTID_VELVETFINEART    , /* 25  0x19,  "Velvet Fine Art Paper\0"                     */
    EPS_MTID_PROOFSEMI        , /* 26  0x1A,  "EPSON Proofing Paper Simimatte\0"            */
    EPS_MTID_HAGAKIRECL       , /* 27  0x1B,  "Post Card - Recycled Paper\0"                */
    EPS_MTID_HAGAKIINKJET     , /* 28  0x1C,  "Post Card - Ink Jet Paper\0"                 */
    EPS_MTID_PHOTOINKJET2     , /* 29  0x1D,  "Photo Quality Ink Jet Paper\0"               */
    EPS_MTID_DURABRITE        , /* 30  0x1E,  "DURABrite Ink Glossy Photo Paper\0"          */
    EPS_MTID_MATTEMEISHI      , /* 31  0x1F,  "Matte Meishi Card\0"                         */
    EPS_MTID_HAGAKIATENA      , /* 32  0x20,  "Post Card - Address Side\0"                  */
    EPS_MTID_PHOTOALBUM       , /* 33  0x21,  "Photo Album Kit\0"                           */
    EPS_MTID_PHOTOSTAND       , /* 34  0x22,  "Photo Stand Kit\0"                           */
    EPS_MTID_RCB              , /* 35  0x23,  "RC-B\0"                                      */
    EPS_MTID_PGPHOTOEG        , /* 36  0x24,  "Premimum Glossy Photo Paper - EG\0"          */
    EPS_MTID_ENVELOPE         , /* 37  0x25,  "Envelope\0"                                  */
    EPS_MTID_PLATINA          , /* 38  0x26,  "Ultra Glossy Photo Paper\0"                  */
    EPS_MTID_ULTRASMOOTH      , /* 39  0x27,  "Ultra Smooth Fine Art Paper\0"               */
    EPS_MTID_SFHAGAKI         , /* 40  0x28,  "Super Fine Postcard\0"                       */
    EPS_MTID_PHOTOSTD         , /* 41  0x29,  "Premium Glossy Photo Paper (Standard)\0"     */
    EPS_MTID_GLOSSYHAGAKI     , /* 42  0x2A,  "Glossy Postcard\0"                           */
    EPS_MTID_GLOSSYPHOTO      , /* 43  0x2B,  "Glossy Photo Paper\0"                        */
    EPS_MTID_GLOSSYCAST	      , /* 44  0x2C,  "Epson Photo\0"							    */
	EPS_MTID_BUSINESSCOAT     , /* 45  0x2D,  "Business Ink Jet Coat Paper\0"			    */
	EPS_MTID_MEDICINEBAG      , /* 46  0x2E,  "Medicine bag\0"			                    */
	EPS_MTID_THICKPAPER       , /* 47  0x2F,  "Thick Paper\0"                               */
	EPS_MTID_BROCHURE         , /* 48  0x30,  "Brochure & Flyer Paper Glossy Double-sided\0"*/
	EPS_MTID_MATTE_DS         , /* 49  0x31,  "EPSON Matte Double-sided\0"                  */
	EPS_MTID_BSMATTE_DS       , /* 50  0x32,  "EPSON Bussines card Matte Double-sided\0"    */
	EPS_MTID_3D               , /* 51  0x33,  "3D media\0"                                  */
	EPS_MTID_LCPP             , /* 52  0x34,  "Photo Paper Glossy\0"                        */
	EPS_MTID_PREPRINTED       , /* 53  0x35,  "Preprinted\0"                                */
	EPS_MTID_LETTERHEAD       , /* 54  0x36,  "Letterhead\0"                                */
	EPS_MTID_RECYCLED         , /* 55  0x37,  "Recycled\0"                                  */
	EPS_MTID_COLOR            , /* 56  0x38,  "Color\0"                                     */
	EPS_MTID_BUSINESS_PLAIN   , /* 57  0x39,  "Business Plain Paper\0"                      */
	EPS_MTID_PLAIN_ROLL_STICKER=59, /* 59 0x3B"Plain Roll Sticker\0"                        */
	EPS_MTID_GROSSY_ROLL_STICKER, /* 60 0x3C  "Glossy Roll Sticker\0"                       */
	EPS_MTID_PLAIN1           , /* 61  0x3D   "Plain Paper 1\0"                             */
	EPS_MTID_PLAIN2           , /* 62  0x3E   "Plain Paper 2\0"                             */
	EPS_MTID_THICKPAPER1=65   , /* 65  0x41,  "Thick Paper 1\0"                             */
	EPS_MTID_THICKPAPER2      , /* 66  0x42,  "Thick Paper 2\0"                             */
	EPS_MTID_THICKPAPER3      , /* 67  0x43,  "Thick Paper 3\0"                             */
	EPS_MTID_THICKPAPER4      , /* 68  0x44,  "Thick Paper 4\0"                             */
	EPS_MTID_THINPAPER1       , /* 69  0x45,  "Thin  Paper 1\0"    = ESCPAGE_MTID_THINPAPER */
	EPS_MTID_HIGH_QUALITY_PLAIN,/* 70  0x46,  "High Quality Plain Paper\0"                  */
	EPS_MTID_BS_HALFGLOSSY_DS , /* 71  0x47,  "Bussines card Harf Glossy Double-sided\0"    */
	EPS_MTID_THICKPAPER5      , /* 72  0x48,  "Thick Paper 5\0"                             */
	EPS_MTID_PHOTOINKJET_DS   , /* 73  0x49,  "Photo Qaulity Ink Jet Paper DS\0"            */
    EPS_MTID_TRANSPARENCY  =74, /* 74  0x4A,  "OHP Sheet for LP\0" = ESCPAGE_MTID_OHP       */
    EPS_MTID_SPECIAL          , /* 75  0x4B,  "Special\0"          = ESCPAGE_MTID_SPECIAL   */
    EPS_MTID_UNSPECIFIED      , /* 76  0x4C,  "Unspecified\0"      = ESCPAGE_MTID_NON       */
    EPS_MTID_SEMI_THICK       , /* 77  0x4D,  "Semi-thick\0"       = ESCPAGE_MTID_FINE      */
	EPS_MTID_GLOSS_DS1     =82, /* 82  0x52,  "SureLab Photo Paper Gloss - DS(225)\0"       */
	EPS_MTID_GLOSS_DS2        , /* 83  0x53,  "SureLab Photo Paper Gloss - DS(190)\0"       */
	EPS_MTID_LUSTER_DS1    =85, /* 85  0x55,  "SureLab Photo Paper Luster- DS(225)\0"       */
	EPS_MTID_LUSTER_DS2       , /* 86  0x56,  "SureLab Photo Paper Luster- DS(192)\0"       */
	EPS_MTID_GROSS_SS1_ROLL   , /* 87  0x57,  "SureLab Photo Paper Gloss - SS(250)\0"       */
	EPS_MTID_LUSTER_SS1_ROLL  , /* 88  0x58,  "SureLab Photo Paper Luster- SS(250)\0"       */
	EPS_MTID_MATTE_ROLL       , /* 89  0x59,  "Photo Paper<Matte>(Roll)\0"                  */
	EPS_MTID_PGPHOTO_DS       , /* 90  0x5A,  "Double-sided photo paper <Glossy>\0"         */ 
    EPS_MTID_CDDVD            , /* 91  0x5B,  "CD/DVD Label\0"                              */
    EPS_MTID_CDDVDHIGH        , /* 92  0x5C,  "CD/DVD High Quality Label\0"                 */
    EPS_MTID_CDDVDGLOSSY      , /* 93  0x5D,  "CD/DVD Glossy Surface\0"                     */
	EPS_MTID_CARDSTOCK_PLAIN  , /* 94  0x5E,  "Card Stock(Plain)\0"                         */
	EPS_MTID_PHOTOPAPER_MATTE , /* 95  0x5F,  "Photo Paper(Matte)\0"                        */
	EPS_MTID_PHOTOPAPER_GLOSSY, /* 96  0x60,  "Photo Paper(Glossy)\0"                       */
	EPS_MTID_CARDSTOCK_COATED , /* 97  0x61,  "Card Stock(Coated)\0"                        */
	EPS_MTID_PSPHOTO_DS       , /* 98  0x62,  "Double-sided photo paper <semi-glossy>\0"    */
    EPS_MTID_CLEANING         , /* 99  0x63,  "Cleaning Paper\0"                            */
    EPS_MTID_SW_MATTE     =128, /*128  0x80,  "Singleweight Matte Paper\0"                  */
    EPS_MTID_DW_MATTE     =130, /*130  0x82,  "Doubleweight Matte Paper\0"                  */
    EPS_MTID_PGPHOTO2     =137, /*137  0x89,  "Premium Glossy Photo Paper(250)\0"           */
    EPS_MTID_PSPHOTO2         , /*138  0x8A,  "Premium Semigloss Photo Paper(250)\0"        */
    EPS_MTID_PLPHOTO2         , /*139  0x8B,  "Premimum Luster Photo Paper(250)\0"          */
    EPS_MTID_PGPHOTO3         , /*140  0x8C,  "Premium Glossy Photo Paper(170)\0"           */
    EPS_MTID_PSPHOTO3         , /*141  0x8D,  "Premium Semigloss Photo Paper(170)\0"        */
    EPS_MTID_PLOOFING_WHITE_MAT,/*142  0x8E,  "Proofing Paper White Semimatte\0"            */
    EPS_MTID_PSMPHOTO     =144, /*144  0x90,  "Premium Semimatte Photo Paper (260)\0"       */
    EPS_MTID_PHOTOGROSS       , /*145  0x91,  "Photo Paper Gloss 250\0"                     */
    EPS_MTID_PLAIN_THICK  =161, /*161  0xA1,  "Plain Paper Thick\0"                         */
    EPS_MTID_PLAIN_THIN       , /*162  0xA2,  "Plain Paper Thin\0"                          */
	EPS_MTID_BARYTA       =174, /*174  0xAE,  "Baryta\0"                                    */
    EPS_MTID_COATED       =176, /*176  0xB0,  "Coated\0"           = ESCPAGE_MTID_COATED    */
    EPS_MTID_EN_MATTE     =178, /*133  0x85,  "Enhanced Matte Paper\0"                      */
    EPS_MTID_LABEL        =183, /*183  0xB7,  "Label Papaer\0"     = ESCPAGE_MTID_LABEL     */
	EPS_MTID_AUTO_PLAIN    =253,    /*253  0xFD,  "Auto Select(Plain Paper)\0"              */
    EPS_MTID_UNKNOWN       =0xff/* unknown                                                  */
} MEDIA_TYPE_ID;


        /*** Media Type Index                                                           */
        /*** ---------------------------------------------------------------------------*/
static const EPS_UINT32 epsMediaTypeIndex[] = {
                                /* Dec  Hex                Text Name                        */
    EPS_MTID_PLAIN            , /*  0  0x00,  "Plain Paper\0"                               */
    EPS_MTID_360INKJET        , /*  1  0x01,  "360dpi Ink Jet Paper \0"                     */
    EPS_MTID_IRON             , /*  2  0x02,  "Iron-On Cool Peel Transfer Paper\0"          */
    EPS_MTID_PHOTOINKJET      , /*  3  0x03,  "Photo Qaulity Ink Jet Paper #2\0"            */
    EPS_MTID_PHOTOADSHEET     , /*  4  0x04,  "Photo Qaulity Self Adhesive Sheets\0"        */
    EPS_MTID_MATTE            , /*  5  0x05,  "Mattee Paper-HeavyWeight\0"                  */
    EPS_MTID_PHOTO            , /*  6  0x06,  "Photo Paper\0"                               */
    EPS_MTID_PHOTOFILM        , /*  7  0x07,  "Photo Quality Glossy Flim\0"                 */
    EPS_MTID_MINIPHOTO        , /*  8  0x08,  "Photo Stickers 4/6\0"                        */
    EPS_MTID_OHP              , /*  9  0x09,  "Ink Jet Transparencies\0                     */
    EPS_MTID_BACKLIGHT        , /* 10  0x0A,  "Back Light Film\0"                           */
    EPS_MTID_PGPHOTO          , /* 11  0x0B,  "Premium Glossy Photo Paper\0"                */
    EPS_MTID_PSPHOTO          , /* 12  0x0C,  "Premium Semigloss Photo Paper\0"             */
    EPS_MTID_PLPHOTO          , /* 13  0x0D,  "Premimum Luster Photo Paper\0"               */
    EPS_MTID_MCGLOSSY         , /* 14  0x0E,  "Glossy Paper - Photo Weight\0"               */
    EPS_MTID_ARCHMATTE        , /* 15  0xOF,  "Archival Matte Paper\0"                      */
    EPS_MTID_WATERCOLOR       , /* 16  0x10,  "Water Paper-Radiant White\0"                 */
    EPS_MTID_PROGLOSS         , /* 17  0x11,  "Professional Glossy Paper\0"                 */
    EPS_MTID_MATTEBOARD       , /* 18  0x12,  "Matte Board Paper\0"                         */
    EPS_MTID_PHOTOGLOSS       , /* 19  0x13,  "Photo Quality Glossy Paper\0"                */
    EPS_MTID_SEMIPROOF        , /* 20  0x14,  "Dupont/EPSON Semigloss Proofing Paper-A\0"   */
    EPS_MTID_SUPERFINE2       , /* 21  0x15,  "Super Fine Paper -2\0"                       */
    EPS_MTID_DSMATTE          , /* 22  0x16,  "Double Sided Matte Paper\0"                  */
    EPS_MTID_CLPHOTO          , /* 23  0x17,  "ColorLife Photo Paper\0"                     */
    EPS_MTID_ECOPHOTO         , /* 24  0x18,  "Economy Photo Paper\0"                       */
    EPS_MTID_VELVETFINEART    , /* 25  0x19,  "Velvet Fine Art Paper\0"                     */
    EPS_MTID_PROOFSEMI        , /* 26  0x1A,  "EPSON Proofing Paper Simimatte\0"            */
    EPS_MTID_HAGAKIRECL       , /* 27  0x1B,  "Post Card - Recycled Paper\0"                */
    EPS_MTID_HAGAKIINKJET     , /* 28  0x1C,  "Post Card - Ink Jet Paper\0"                 */
    EPS_MTID_PHOTOINKJET2     , /* 29  0x1D,  "Photo Quality Ink Jet Paper\0"               */
    EPS_MTID_DURABRITE        , /* 30  0x1E,  "DURABrite Ink Glossy Photo Paper\0"          */
    EPS_MTID_MATTEMEISHI      , /* 31  0x1F,  "Matte Meishi Card\0"                         */
    EPS_MTID_HAGAKIATENA      , /* 32  0x20,  "Post Card - Address Side\0"                  */
    EPS_MTID_PHOTOALBUM       , /* 33  0x21,  "Photo Album Kit\0"                           */
    EPS_MTID_PHOTOSTAND       , /* 34  0x22,  "Photo Stand Kit\0"                           */
    EPS_MTID_RCB              , /* 35  0x23,  "RC-B\0"                                      */
    EPS_MTID_PGPHOTOEG        , /* 36  0x24,  "Premimum Glossy Photo Paper - EG\0"          */
    EPS_MTID_ENVELOPE         , /* 37  0x25,  "Envelope\0"                                  */
    EPS_MTID_PLATINA          , /* 38  0x26,  "Ultra Glossy Photo Paper\0"                  */
    EPS_MTID_ULTRASMOOTH      , /* 39  0x27,  "Ultra Smooth Fine Art Paper\0"               */
    EPS_MTID_SFHAGAKI         , /* 40  0x28,  "Super Fine Postcard\0"                       */
    EPS_MTID_PHOTOSTD         , /* 41  0x29,  "Premium Glossy Photo Paper (Standard)\0"     */
    EPS_MTID_GLOSSYHAGAKI     , /* 42  0x2A,  "Glossy Postcard\0"                           */
    EPS_MTID_GLOSSYPHOTO      , /* 43  0x2B,  "Glossy Photo Paper\0"                        */
    EPS_MTID_GLOSSYCAST	      , /* 44  0x2C,  "Epson Photo\0"							    */
	EPS_MTID_BUSINESSCOAT     , /* 45  0x2D,  "Business Ink Jet Coat Paper\0"				*/
	EPS_MTID_MEDICINEBAG      , /* 46  0x2D,  "Medicine bag\0"			                    */
	EPS_MTID_THICKPAPER       , /* 47  0x2D,  "Thick Paper\0"                               */
	EPS_MTID_BROCHURE         , /* 48  0x2E,  "Brochure & Flyer Paper Glossy Double-sided\0"*/
	EPS_MTID_MATTE_DS         , /* 49  0x2F,  "EPSON Matte Double-sided\0"                  */
	EPS_MTID_BSMATTE_DS       , /* 50  0x30,  "EPSON Bussines card Matte Double-sided\0"    */
	EPS_MTID_3D               , /* 51  0x31,  "3D media\0"                                  */
	EPS_MTID_LCPP             , /* 52  0x34,  "Photo Paper Glossy\0"                        */
	EPS_MTID_PREPRINTED       , /* 53  0x35,  "Preprinted\0"                                */
	EPS_MTID_LETTERHEAD       , /* 54  0x36,  "Letterhead\0"                                */
	EPS_MTID_RECYCLED         , /* 55  0x37,  "Recycled\0"                                  */
	EPS_MTID_COLOR            , /* 56  0x38,  "Color\0"                                     */
	EPS_MTID_BUSINESS_PLAIN   , /* 57  0x39,  "Business Plain Paper\0"                      */
	EPS_MTID_PLAIN_ROLL_STICKER,  /* 59 0x3B "Plain Roll Sticker\0"                         */
	EPS_MTID_GROSSY_ROLL_STICKER, /* 60 0x3C "Glossy Roll Sticker\0"                        */
	EPS_MTID_PLAIN1           , /* 61  0x3D   "Plain Paper 1\0"                             */
	EPS_MTID_PLAIN2           , /* 62  0x3E   "Plain Paper 2\0"                             */
	EPS_MTID_THICKPAPER1      , /* 65  0x41,  "Thick Paper 1\0"                             */
	EPS_MTID_THICKPAPER2      , /* 66  0x42,  "Thick Paper 2\0"                             */
	EPS_MTID_THICKPAPER3      , /* 67  0x43,  "Thick Paper 3\0"                             */
	EPS_MTID_THICKPAPER4      , /* 68  0x44,  "Thick Paper 4\0"                             */
	EPS_MTID_THINPAPER1       , /* 69  0x45,  "Thin  Paper 1\0"    = ESCPAGE_MTID_THINPAPER */
	EPS_MTID_HIGH_QUALITY_PLAIN , /* 70 0x46"High Quality Plain Paper\0"                    */
	EPS_MTID_BS_HALFGLOSSY_DS , /* 71  0x47,  "Bussines card Harf Glossy Double-sided\0"    */
	EPS_MTID_THICKPAPER5      , /* 72  0x48,  "Thick Paper 5\0"                             */
	EPS_MTID_PHOTOINKJET_DS   , /* 73  0x49,  "Photo Qaulity Ink Jet Paper DS\0"            */
    EPS_MTID_TRANSPARENCY     , /* 74  0x4A,  "OHP Sheet for LP\0" = ESCPAGE_MTID_OHP       */
    EPS_MTID_SPECIAL          , /* 75  0x4B,  "Special\0"          = ESCPAGE_MTID_SPECIAL   */
    EPS_MTID_UNSPECIFIED      , /* 76  0x4C,  "Unspecified\0"      = ESCPAGE_MTID_NON       */
    EPS_MTID_SEMI_THICK       , /* 77  0x4D,  "Semi-thick\0"       = ESCPAGE_MTID_FINE      */
	EPS_MTID_GLOSS_DS1        , /* 82  0x52,  "SureLab Photo Paper Gloss - DS(225)\0"       */
	EPS_MTID_GLOSS_DS2        , /* 83  0x53,  "SureLab Photo Paper Gloss - DS(190)\0"       */
	EPS_MTID_LUSTER_DS1       , /* 85  0x55,  "SureLab Photo Paper Luster- DS(225)\0"       */
	EPS_MTID_LUSTER_DS2       , /* 86  0x56,  "SureLab Photo Paper Luster- DS(192)\0"       */
	EPS_MTID_GROSS_SS1_ROLL   , /* 87  0x57,  "SureLab Photo Paper Gloss - SS(250)\0"       */
	EPS_MTID_LUSTER_SS1_ROLL  , /* 88  0x58,  "SureLab Photo Paper Luster- SS(250)\0"       */
	EPS_MTID_MATTE_ROLL       , /* 89  0x59,  "Photo Paper<Matte>(Roll)\0"                  */
	EPS_MTID_PGPHOTO_DS       , /* 90  0x5A,  "Double-sided photo paper <Glossy>\0"         */ 
	EPS_MTID_CDDVD            , /* 91  0x5B,  "CD/DVD Label\0"                              */
    EPS_MTID_CDDVDHIGH        , /* 92  0x5C,  "CD/DVD High Quality Label\0"                 */
    EPS_MTID_CDDVDGLOSSY      , /* 93  0x5D,  "CD/DVD Glossy Surface\0"                     */
	EPS_MTID_CARDSTOCK_PLAIN  , /* 94  0x5E,  "Card Stock(Plain)\0"                         */
	EPS_MTID_PHOTOPAPER_MATTE , /* 95  0x5F,  "Photo Paper(Matte)\0"                        */
	EPS_MTID_PHOTOPAPER_GLOSSY, /* 96  0x60,  "Photo Paper(Glossy)\0"                       */
	EPS_MTID_CARDSTOCK_COATED , /* 97  0x61,  "Card Stock(Coated)\0"                        */
	EPS_MTID_PSPHOTO_DS       , /* 98  0x62,  "Double-sided photo paper <semi-glossy>\0"    */
    EPS_MTID_CLEANING         , /* 99  0x63,  "Cleaning Paper\0"                            */
    EPS_MTID_SW_MATTE         , /*128  0x80,  "Singleweight Matte Paper\0"                  */
    EPS_MTID_DW_MATTE         , /*130  0x82,  "Doubleweight Matte Paper\0"                  */
    EPS_MTID_PGPHOTO2         , /*137  0x89,  "Premium Glossy Photo Paper(250)\0"           */
    EPS_MTID_PSPHOTO2         , /*138  0x8A,  "Premium Semigloss Photo Paper(250)\0"        */
    EPS_MTID_PLPHOTO2         , /*139  0x8B,  "Premimum Luster Photo Paper(250)\0"          */
    EPS_MTID_PGPHOTO3         , /*140  0x8C,  "Premium Glossy Photo Paper(170)\0"           */
    EPS_MTID_PSPHOTO3         , /*141  0x8D,  "Premium Semigloss Photo Paper(170)\0"        */
    EPS_MTID_PLOOFING_WHITE_MAT, /*142 0x8E,  "Proofing Paper White Semimatte\0"            */
    EPS_MTID_PSMPHOTO         , /*144  0x90,  "Premium Semimatte Photo Paper (260)\0"       */
    EPS_MTID_PHOTOGROSS       , /*145  0x91,  "Photo Paper Gloss 250\0"                     */
	EPS_MTID_PLAIN_THICK      , /*161  0xA1,  "Plain Paper Thick\0"                         */
    EPS_MTID_PLAIN_THIN       , /*162  0xA2,  "Plain Paper Thin\0"                          */
    EPS_MTID_BARYTA           , /*174  0xAE,  "Baryta\0"                                    */
    EPS_MTID_COATED           , /*176  0xB0,  "Coated\0"           = ESCPAGE_MTID_COATED    */
    EPS_MTID_EN_MATTE         , /*178  0xB2,  "Enhanced Matte Paper\0"                      */
    EPS_MTID_LABEL            , /*183  0xB7,  "Label Papaer\0"     = ESCPAGE_MTID_LABEL     */
	EPS_MTID_AUTO_PLAIN        , /*253  0xFD,  "Auto Select(Plain Paper)\0"                 */
/*  EPS_MTID_UNKNOWN   not include this list                                                */
};

#define EPS_NUM_MEDIA_TYPES     (sizeof(epsMediaTypeIndex)/sizeof(EPS_UINT32))


    /*** LAYOUT                                                                         */
    /*** -------------------------------------------------------------------------------*/
#define	EPS_MLID_CUSTOM 	0x00			/* User-defined margins                     */
#define	EPS_MLID_BORDERLESS	0x01			/* 0mm                                      */
#define	EPS_MLID_BORDERS	0x02			/* 3mm                                      */
#define	EPS_MLID_CDLABEL	0x04			/* CD/DVD Label                             */
#define	EPS_MLID_DIVIDE16	0x08			/* 16 Division (for mini phot sheel)        */


    /*** Print Quality                                                                  */
    /*** -------------------------------------------------------------------------------*/
#define EPS_MQID_UNKNOWN    0x00            /* invalid type                             */
#define	EPS_MQID_DRAFT		0x01
#define	EPS_MQID_NORMAL		0x02
#define	EPS_MQID_HIGH		0x04
#define	EPS_MQID_SUPER_HIGH	0x08
#define	EPS_MQID_BEST		0x10
#define	EPS_MQID_STANDARD_VIVID	0x40
#define	EPS_MQID_BEST_PLAIN 0x80
#define	EPS_MQID_ALL		(EPS_MQID_DRAFT | EPS_MQID_NORMAL | EPS_MQID_HIGH| EPS_MQID_BEST_PLAIN)
                                            /* Supported by PM reply */
                                            

	/*** Paper Source                                                                   */
    /*** -------------------------------------------------------------------------------*/
#define	EPS_MPID_NOT_SPEC   0x0000
#define	EPS_MPID_REAR       0x0001
#define	EPS_MPID_FRONT1     0x0002
#define	EPS_MPID_FRONT2     0x0004
#define	EPS_MPID_CDTRAY     0x0008
#define	EPS_MPID_MANUAL     0x0010
#define	EPS_MPID_REARMANUAL EPS_MPID_MANUAL
#define	EPS_MPID_FRONT3     0x0020
#define	EPS_MPID_FRONT4     0x0040
#define	EPS_MPID_AUTO       0x0080
#define	EPS_MPID_ROLL       0x0100
#define	EPS_MPID_MANUAL2	0x0200
#define	EPS_MPID_MPTRAY_IJ  0x0400
#define	EPS_MPID_HIGHCAP	0x0800
#define	EPS_MPID_FRONT5     0x1000
/* append for page printer */
#define	EPS_MPID_MPTRAY		0x8000
#define	EPS_MPID_ALL_ESCPR	(EPS_MPID_REAR | EPS_MPID_FRONT1 | EPS_MPID_FRONT2 | EPS_MPID_FRONT3 | EPS_MPID_FRONT4 | \
							EPS_MPID_CDTRAY | EPS_MPID_ROLL | EPS_MPID_MANUAL | EPS_MPID_MANUAL2 | EPS_MPID_AUTO   | \
							EPS_MPID_MPTRAY_IJ | EPS_MPID_HIGHCAP | EPS_MPID_FRONT5)
#define	EPS_MPID_ALL_ESCPAGE (EPS_MPID_MPTRAY | EPS_MPID_FRONT1 | EPS_MPID_FRONT2 | EPS_MPID_FRONT3 | EPS_MPID_FRONT4)


#define	EPS_IS_CDDVD( t )					\
		(  EPS_MTID_CDDVD       == t		\
		|| EPS_MTID_CDDVDHIGH   == t		\
		|| EPS_MTID_CDDVDGLOSSY == t )


	/*** duplex                                                                         */
    /*** -------------------------------------------------------------------------------*/
#define	EPS_DUPLEX_DISABLE				(0)
#define	EPS_DUPLEX_ENABLE				(1 << 0)
#define	EPS_DUPLEX_ENABLE_BORDERLESS	(1 << 1)


#ifdef __cplusplus
}
#endif

#endif  /* def __EPSON_ESCPR_MEDIA_H__ */

/*_______________________________  epson-escpr-media.h   _______________________________*/
  
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*       1         2         3         4         5         6         7         8        */
/*******************************************|********************************************/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/***** End of File *** End of File *** End of File *** End of File *** End of File ******/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

