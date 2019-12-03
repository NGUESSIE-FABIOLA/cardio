#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 1000

int main (void)
{
 /* set pin 5 of PORTB for output*/
 DDRB |= _BV(DDB5);
 
 while(1) {
  /* set pin 5 high to turn led on */
  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 
  /* set pin 5 low to turn led off */
  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 }
}



/*

avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o test-cc.o test-cc.c
avr-gcc -mmcu=atmega328p test-cc.o -o test-cc.elf
avr-objcopy -O ihex -R -eeprom test-cc.elf test-cc.hex
avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:test-cc.hex

*/