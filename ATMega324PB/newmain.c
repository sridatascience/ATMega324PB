#include <avr/io.h>

volatile int m =10;
int add(volatile uint8_t n, volatile uint8_t o, volatile uint8_t p ){
   return n+o+p;
}
int main() {
   volatile int a = 0x05;
   PORTA = a;
   m = PORTA;
   volatile int c = 0x1F;
   PORTB = c;
   volatile int b =0x08;
   PORTC = b;
   volatile int t = add(a,b,c);
   PORTD =t;
   return 0;
}
