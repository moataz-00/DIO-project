#define PINC    (*(volatile unsigned char *)0x33)
#define DDRC     (*(volatile unsigned char *)0x34)
#define PORTC     (*(volatile unsigned char *)0x35)


#define PINB    (*(volatile unsigned char *)0x36)
#define DDRB     (*(volatile unsigned char *)0x37)
#define PORTB     (*(volatile unsigned char *)0x38)

#define  F_CPU   8000000
#include <util/delay.h>

int main(void)
{
   
   //DDRC=00;//0b00000001
  // PORTC=00;
  
  DDRB=0xff;
 
 
  
  while (1)
  {
	  
	  // task 1 -> Party light 
	  
	  /*   
	  
	  for (int i=1;i<=128;)
	  {
	  PORTB=i;
	  _delay_ms(500);
	  i=i*2;
	  }
	  
	  or
	  
	  for (int i=0;i<=7;i++)
	  {
		  PORTB = PORTB | 1 << i;
		  _delay_ms(500);
		  PORTB = PORTB & ~(1 << i);
		  
	  }
	  
	  ----------------------------
	  
	  task 2 -> ping pong
	  
	  for (int i=0;i<=7;i++)
	  {
		  PORTB = PORTB | 1 << i;
		  _delay_ms(100);
		  PORTB = PORTB & ~(1 << i);
		  
	  }
	  
	  for (int i=7;i>=0;i--)
	  {
		  
		  PORTB = PORTB | 1 << i;
		  _delay_ms(100);
		  PORTB = PORTB & ~(1 << i);
		  
	  }
	  
	   
	  ---------------------------
	   Task 3 -> Window curtain
	     
	     for (int i=0;i<=7;i++)
	     {
		     PORTB = PORTB | 1 << i;
		     _delay_ms(500);
	     }
	     
	     for (int i=7;i>=0;i--)
	     {
		     PORTB = PORTB & ~(1 << i);
		     _delay_ms(500);
	     }
	   */
	  
	
	
	   
  }
  
}

