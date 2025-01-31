#pragma once
#include <Arduboy2.h>

#define CENTER_STR(str) WIDTH / 2 - ((sizeof(str) - 1) * (5 + 1) - 1) / 2

// To convert, use
// https://www.bloggingadeadhorse.com/TeamARGImgConverter/
// https://www.bloggingadeadhorse.com/TeamARGTileSheetConverter/
// https://www.bloggingadeadhorse.com/TeamARGSpriteConverter/

const uint8_t PROGMEM tiles[] = {
    // tile width
    8,
    // tile height
    8,
    // grass
    0x7c, 0xcf, 0xff, 0xe3, 0x3f, 0xf9, 0xcf, 0xff, 
    // wall
    0x22, 0xe3, 0x22, 0x22, 0x22, 0x3e, 0x22, 0x22, 
    // floor
    0xee, 0x55, 0xbb, 0x55, 0xee, 0x55, 0xbb, 0x55, 
    // chest
    0x03, 0x75, 0x76, 0x66, 0x66, 0x76, 0x75, 0x03
};