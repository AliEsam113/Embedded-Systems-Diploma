#include <uart.h>

unsigned char string_buffer[100] = "Learn_in_Depth : Ali Essam ";
unsigned char const string_buffer2[100] = "Learn_in_Depth : Ali Essam ";
void main(void)
{
	Uart_Send_String(string_buffer);
}