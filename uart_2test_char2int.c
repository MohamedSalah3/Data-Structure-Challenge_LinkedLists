#include <stdio.h>


uint8_t manipulate_data(uint8_t * Data_Uart_Sent);
int main()
{
manipulate_data(uint8_t * Data_Uart_Sent);
printf("Z=%d \n",z);

return 0;
}

uint8_t manipulate_data(uint8_t * Data_Uart_Sent)
{
/* Take characters-- */
   /* turn them into int*/
char i=100;
char x='1';
char y='9';
char M='9';
char z=0;
z+=(x-48)*100;
z+=(y-48)*10;
z+=(M-48)*1;
return z;
}
