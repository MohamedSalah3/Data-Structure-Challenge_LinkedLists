#include <stdio.h>
#define LOW  0		// defines LOW value for a bit
#define HIGH 0xFF	// defines HIGH value for a bit

#define GPIOA	0
#define GPIOB	1
#define GPIOC	2
#define GPIOD	3


void gpioPinDirection(uint8_t u8_port, uint8_t u8_pins, uint8_t u8_direction)
{
switch(u8_direction){
case LOW:
{
switch (u8_port)	
{	case GPIOA:
	PORTA_DIR &=(~u8_pins);   // 0b01111111
	break;
	case GPIOB:
	PORTB_DIR &=(~u8_pins);
	break;
	case GPIOC:
	PORTC_DIR &=(~u8_pins);
	break;
	case GPIOD:
	PORTD_DIR &=(~u8_pins);
	break;
	
}
}
case HIGH:{
switch (u8_port)	
{	case GPIOA:
	PORTA_DIR |=(u8_pins);
	break;
	case GPIOB:
	PORTB_DIR |=u8_pins;
	break;
	case GPIOC:
	PORTC_DIR |=(u8_pins);
	break;
	case GPIOD:
	PORTD_DIR |=(u8_pins);
	break;
	
}
}

}
	
	
	
}

int main()
{
gpioPinDirection(uint8_t u8_port, uint8_t u8_pins, uint8_t u8_direction)
unsigned char x = 255;



printf("%d",x);
}