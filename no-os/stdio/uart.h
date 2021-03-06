/****************************************************************
    Copyright (C) 2015 Sean Guo. All rights reserved.
					      									  
    > File Name:         < uart.h >
    > Author:            < Sean Guo >
    > Mail:              < iseanxp+code@gmail.com >
    > Created Time:      < 2015/09/27 >
    > Last Changed: 
    > Description:		ARM-Friendly Tiny6410 UART
****************************************************************/


#ifndef __uart__
#define __uart__

// UART0 通道引脚配置为UART功能 
void UART0_Port_Init();

// 配置波特率
void UART0_Set_BaudRate();

// 配置传输格式
void UART0_Set_Format();

//发送字符
void UART0_PutChar(char data);

//接收字符
char UART0_GetChar();

// 发送一段字符串
void UART0_SendString(char *string);

// 以十进制数字形式打印unsigned char型数据(8 bit)
void UART0_SendData8(unsigned char data);

// 以十六进制数字形式打印unsigned lont int型数据(32 bit)
void UART0_SendData32(unsigned long int data);

// printf / scanf 函数需要使用这两个函数;
void putc(unsigned char c);
unsigned char getc(void);

#endif
