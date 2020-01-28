#include <stdio.h>

int main()
{
unsigned char duty=0;
float dutyReal;
unsigned char pwm_time_on=255;
printf("%d\n",pwm_time_on);
scanf("%d",&duty);
printf("%d\n",duty);
dutyReal=((float)duty/(float)100);
printf("%f\n",dutyReal);
pwm_time_on=(float)pwm_time_on*dutyReal;
printf("%d\n",pwm_time_on);

return 0;
}
