#include "uart.h"

void uart_init(){
    UBRRL =UBRR_VALUE;
    UBRRH = (UBRR_VALUE>>8);
    UCSRB |=(1<<TXEN)|(1<<RXEN);
    UCSRB &= (~(1<<UCSZ2));
    UCSRC |=(1<< UCSZ1)|(1<<UCSZ0);
}
void trans_uart(unsigned char data){
    while (!(UCSRA & (1<<UDRE)));
    UDR =data;
}
uint16_t reciv_uart(void){
    while (!(UCSRA &(1<<RXC)));
    return UDR;
}
