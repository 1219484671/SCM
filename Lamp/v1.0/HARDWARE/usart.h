#ifndef __usart_H
#define __usart_H

#include "sys.h" 

#define USART1_DMA_MODE 1

#if USART1_DMA_MODE
#define USART1_REC_LEN 10
extern u8 USART1_RX_BUF[USART1_REC_LEN];
extern u8 USART1_byteNum;
#endif

void USART1_Init(u32 bound);
void USART2_Init(u32 bound);
void USART3_Init(u32 bound);
void UART4_Init(u32 bound);
void UART5_Init(u32 bound);

#endif

