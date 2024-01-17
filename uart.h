#ifndef _UART_H
#define _UART_H

#include <stdio.h>
void uart2_init(void);
int uart2_write(int ch);
int uart2_read(void);

#endif