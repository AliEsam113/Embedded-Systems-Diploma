/* Linker Script Cortex-m3
Ali Essam Hassan */


MEMORY
{
	flash(RX)      : ORIGIN = 0X08000000, LENGTH =128K
	sram(RWX)   : ORIGIN = 0X20000000, LENGTH =20K
}

SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text)
			*(.rodata)
			. = ALIGN(4) ;
			_E_text = .;
	} > flash
	
	.data : {
			_S_data = . ;
			*(.data*)
			_E_data = . ;
	} > sram AT > flash
	
	.bss : {
			_S_bss = . ;
			*(.bss*)
			_E_bss = . ;
			
			. = ALIGN(4);
			. = . + 0x1000;
			_stack_top = . ;
	} > sram
}