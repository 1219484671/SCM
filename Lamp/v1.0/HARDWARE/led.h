#ifndef _LED_H
#define _LED_H

#include "sys.h"

#define White  0
#define Yellow 1

#define Open  0
#define Close 1

extern u8 color;
extern u8 state;

void Open_LED(void);
void Close_LED(void);
void Turn_Up_LED(void);
void Turn_Down_LED(void);
void Change_Color(void);

#endif
