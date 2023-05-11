#Ali Essam Hassan
 
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_name = cortex-m3


$(Project_name).bin: $(Project_name).elf
		$(CC)objcopy.exe -O binary $< $@
		@echo ">>>>>>Build is Done<<<<<<"

%.o: %.s
		$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
		$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@  

$(Project_name).elf: $(OBJ) $(ASOBJ)
		$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_File.map

clean:
	rm *.elf *.bin	
	
clean_all:
	rm *.o *.elf *.bin
	@echo "Everything is clean"