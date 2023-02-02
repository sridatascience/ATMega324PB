#include <avr/io.h>

uint8_t m =10;
volatile uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
int main() {
   volatile uint8_t a = 0x05;
   PORTA.DIR = a;
   volatile uint8_t c = 0x1F;
   PORTB.DIR = c;
   volatile uint8_t b =0x08;
   PORTC.DIR = b;
   volatile uint8_t t = add(a,b,c);
   PORTA.DIR = t;
   return 0;
}