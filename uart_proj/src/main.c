
#include "uart.h"

int main(void){
uart_init();

    /* Replace with your application code */
    while (1) 
    {
		trans_uart('A'); 
		//unsigned char received = re_uart(); 
    }
}