#include <stdio.h>
#define RESOLUTION 256
#define PRESCALER 1
void SwICU_Read(volatile unsigned char * a_pu8_capt);
unsigned char u8_ovf_counter=0;
int main()
{

unsigned char capt=0;
scanf("%d",&capt);
printf("u8_ovf_counter=\n");
scanf("%d",&u8_ovf_counter);


SwICU_Read(&capt);

return 0;
}

void SwICU_Read(volatile unsigned char * a_pu8_capt)
{
unsigned int  Num_of_Ticks=0;
float Num_of_mm=0;
float time=0.0;
unsigned char PORTB=0;
float TICKTIME=(float)PRESCALER/(float)16000000;
Num_of_Ticks=((* a_pu8_capt)+(u8_ovf_counter * RESOLUTION));
printf("Num_of_Ticks=%d\n",Num_of_Ticks);
time=(float)Num_of_Ticks*TICKTIME;
printf("time=%f\n",time);
Num_of_mm=time/0.000058;
printf("Num_of_MM=%f\n",Num_of_mm);
PORTB=((unsigned int)Num_of_mm<<4);
printf("PORTB=%d\n",PORTB);

}