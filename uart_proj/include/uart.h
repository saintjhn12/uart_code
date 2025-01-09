#define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
#define baud 9600
#define UBRR_VALUE ((F_CPU/(16UL * baud))-1)
#define SET_H_
#define SET_H_
void uart_init();
void trans_uart(unsigned char data);
uint16_t reciv_uart(void);