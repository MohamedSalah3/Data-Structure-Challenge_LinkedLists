

#define SET_BIT(REG,BIT) (REG |=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG &=(~(1<<BIT)))
/*UCSRB*/
#define TXB8    0
#define RXB8    1
#define UCSZ2   2
#define TXEN    3
#define RXEN    4
#define UDRIE   5
#define TXCIE   6
#define RXCIE   7
/*UCSRC*/
/*URSEL UMSEL UPM1 UPM0 USBS UCSZ1 UCSZ0 UCPOL UCSRC*/
#define UCPOL    0
#define UCSZ0    1
#define UCSZ1    2
#define USBS     3
#define UPM0     4
#define UPM1     5
#define UMSEL    6
#define URSEL    7
/*UCSRA*/
/*RXC TXC UDRE FE DOR PE U2X MPCM */
#define MPCM    0
#define U2X     1
#define UPE     2
#define DOR     3
#define FE      4
#define UDRE    5
#define TXC     6
#define RXC     7

typedef enum En_BAUD_Rate{
Baud9600=103,
Baud14400=0x44,
Baud19200=0x33,
Baud38400=0x19/*
Baud57600=0x10,
Baud115200=0x08,
Baud2400=0x01A0,
*/
}En_BAUD_Rate;
typedef enum En_Stop_config{
OneStopBit,
TwoStopBits
}En_Stop_config;
typedef enum EN_Parity{
NoParity,
EvenParity,
OddParity

}EN_Parity;

typedef enum EN_Data_Size{
FiveBits,
SexBits,
SevenBits,
EightBits,
NineBits

}EN_Data_Size;
typedef enum EN_UartMode{
ASynchronous,
Synchronous,
/*full_duplexinterrupt,
transmitInterrupt,
recieveInterrupt,
transmitPooling,
recievePooling,
full_duplexPooling
*/
}EN_UartMode;


void Uart_Init(En_BAUD_Rate Baud_rate,En_Stop_config Stop_bits_num,
  EN_Parity parity_Bit,EN_Data_Size data_num_bits,EN_UartMode uart_mode)
{uint8_t Buffer=0;
uint8_t UBRRL,UCSRA,UCSRB,UCSRC;
switch (Baud_rate) {
  case Baud9600:
  UBRRL=Baud9600;
  break;
  case Baud14400:
  UBRRL=Baud14400;
  break;
  case Baud19200:
  UBRRL=Baud19200;
  break;
  case Baud38400:
  UBRRL=Baud38400;
  break;
}
switch (Stop_bits_num) {
case OneStopBit:
{ SET_BIT(Buffer,URSEL);
  CLEAR_BIT(Buffer,USBS);
  break;
}
case TwoStopBits:
{
  SET_BIT(Buffer,URSEL);
  SET_BIT(Buffer,USBS);
  break;
}
}
switch (data_num_bits)
{
case FiveBits:
{
SET_BIT(Buffer,URSEL);
CLEAR_BIT(Buffer,UCSZ0);
CLEAR_BIT(Buffer,UCSZ1);
CLEAR_BIT(UCSRB,UCSZ2);
break;
}
case SexBits:
{
  SET_BIT(Buffer,URSEL);
  SET_BIT(Buffer,UCSZ0);
  CLEAR_BIT(Buffer,UCSZ1);
  CLEAR_BIT(UCSRB,UCSZ2);
  break;
}
case SevenBits:
{
  SET_BIT(Buffer,URSEL);
  CLEAR_BIT(Buffer,UCSZ0);
  SET_BIT(Buffer,UCSZ1);
  CLEAR_BIT(UCSRB,UCSZ2);
  break;
}
case EightBits:
{   SET_BIT(Buffer,URSEL);
    SET_BIT(Buffer,UCSZ0);
    SET_BIT(Buffer,UCSZ1);
    CLEAR_BIT(UCSRB,UCSZ2);
break;
}

case NineBits:
{   SET_BIT(Buffer,URSEL);
	SET_BIT(Buffer,UCSZ0);
	SET_BIT(Buffer,UCSZ1);
	SET_BIT(UCSRB,UCSZ2);
	break;
}

}

switch (uart_mode) {
  case ASynchronous:
  {
  SET_BIT(Buffer,URSEL);
  CLEAR_BIT(Buffer,UMSEL);
  break;
  }
case Synchronous:
{
  SET_BIT(Buffer,URSEL);
  SET_BIT(Buffer,UMSEL);
  break;
}
}
switch (parity_Bit) {
  case NoParity:
{
SET_BIT(Buffer,URSEL);
CLEAR_BIT(Buffer,UPM0);
CLEAR_BIT(Buffer,UPM1);
  break;
}
case EvenParity:
{
SET_BIT(Buffer,URSEL);
CLEAR_BIT(Buffer,UPM0);
SET_BIT(Buffer,UPM1);
break;
}
case OddParity:
{
SET_BIT(Buffer,URSEL);
SET_BIT(Buffer,UPM1);
SET_BIT(Buffer,UPM0);
break;
}

}
}

UCSRC=Buffer;
SET_BIT(UCSRB,TXEN);/*TXEN*/
SET_BIT(UCSRB,RXEN);/*RXEN*/


}

int main{
Uart_Init(Baud9600,OneStopBit,NoParity,EightBits,ASynchronous);
printf("UBRRL=%d\n",UBRRL);
printf("UCSRC=%d\n",UCSRC);




return 0;
}
