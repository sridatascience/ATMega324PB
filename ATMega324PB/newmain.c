#include <avr/io.h>

int m =10;
int add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
int main() {
   volatile int a = 0x05;
   PORTA = a;
   volatile int c = 0x1F;
   PORTB = c;
   volatile int b =0x08;
   PORTC = b;
   volatile int t = add(a,b,c);
   PORTD =t;
   return 0;
}