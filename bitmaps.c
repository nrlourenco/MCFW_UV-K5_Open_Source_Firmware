#include "bitmaps.h"

const uint8_t BITMAP_CurrentIndicator[8] = { 0xFF,  0xFF,  0x7E,  0x7E, 0x3C,  0x3C,  0x18,  0x18 };

const uint8_t BITMAP_VFO_Default[8] = { 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08 };
const uint8_t BITMAP_VFO_NotDefault[8] = { 0x00, 0x41, 0x41, 0x22, 0x22, 0x14, 0x14, 0x08 };

#ifdef ENABLE_BATTERY_CHARGING
const uint8_t BITMAP_SettingsBattCharging [] = {
	0x3f, 0x4f, 0x73, 0x7c, 0xfe, 0xfe, 0xde, 0xde, 0xce, 0x56, 0x9a, 0xfc, 0xfe, 0xfe, 0x0e, 0x72, 
	0xbc, 0xcf, 0xf7, 0xfb, 0xfb, 0xfd, 0xfe, 0xff, 0xff, 0xff
};
#endif