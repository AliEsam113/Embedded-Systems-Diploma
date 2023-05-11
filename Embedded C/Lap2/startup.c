// Ali Essam Hassan 
#include "platform_types"
//#define STACK_START_SP 0x20001000
extern int main (void);


void Reset_Handler (void)  __attribute__((weak,  alias("Default Handler")));
void NMI_Handler (void)  __attribute__((weak,  alias("Default Handler")));
void H_fault_Handler (void)  __attribute__((weak,  alias("Default Handler")));
void MM_fault_Handler (void)  __attribute__((weak,  alias("Default Handler")));
void Bus_Fault (void)  __attribute__((weak,  alias("Default Handler")));
void Usage_Fault_Handler (void)  __attribute__((weak,  alias("Default Handler")));
void NMI_Handler (void)  __attribute__((weak,  alias("Default Handler")));

extern uint32_t  &_stack_top ;
uint32_t vectors[]  __attribute__((section(".vectors"))) = {
	
	
	&_stack_top,
	(uint32_t *) &Reset_Handler,
	(uint32_t *) &NMI_Handler,
	(uint32_t *) &H_fault_Handler,
	(uint32_t *) &MM_fault_Handler,
	(uint32_t *) &Bus_Fault,
	(uint32_t *) &Usage_Fault_Handler
};
 
extern unsigned _E_text ;
extern unsigned _S_data ;
extern unsigned _E_data ;
extern unsigned _S_bss ;
extern unsigned _E_bss ;
void Default Handler (void)
{
	Reset_Handler();
}
void Reset_Handler(void)
{
	//copy data section from flash to sram
	uint32_t Data_size = (uint32_t *)  &_E_data - (uint32_t *)  &_S_data ;
	uint8_t * P_src = (uint8_t *)  &_E_text ;
	uint8_t * P_dst = (uint8_t *)  &_S_data;
	int i;
	for(i=0; i< Data_size ; i++)
	{
		*((uint8_t *)  P_dst++) = ((uint8_t *)  *P_src++);
	}
	//init bss section in sram
		uint32_t Bss_size = (uint32_t *)  &_E_bss - (uint32_t *)  &_S_bss ;
		P_src = (uint8_t *)  &_E_bss ;
	for(i=0; i< Bss_size ; i++)
	{
		*((uint8_t *)  P_dst++) = 0 ;
	}
	//jump main()
	
	main();
}