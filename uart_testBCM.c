#include <stdio.h>
#define Buffer_Size 10
unsigned char BufferRequested[Buffer_Size];
unsigned char u8_index=0,buf_is_full;
unsigned char UDR,gU8_Data_Recieved;

void send_string(void);
int main()
{
	
unsigned char i=0;
send_string();
send_string();
send_string();
send_string();
send_string();
send_string();
send_string();

for(i=0;i<10;i++)
printf("BufferRequested(%d)=%d\n",i,BufferRequested[i]);	
	
	
return 0;	
}

void send_string(void)
{
/*The mechanism to access array*/
if(u8_index<Buffer_Size){
scanf("%d",&UDR);	
gU8_Data_Recieved=UDR;
BufferRequested[u8_index]=gU8_Data_Recieved;
u8_index++;
}else{
u8_index=0;`
}
	
}