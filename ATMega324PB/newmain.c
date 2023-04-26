#include <avr/io.h>

volatile int m =10;
int add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
int main() {
   volatile int a = 0x05;
   SPCR1 = a;
   m = SPCR1;
   volatile int c = 0x1F;
   DDRD = c;
   volatile int b =0x08;
   DDRC = b;
   volatile int t = add(a,b,c);
   DDRB =t;
   t =a+b+c;
   return 0;
}
