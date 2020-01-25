#include <stdio.h>
#include <math.h>
#define N_DECIMAL_POINTS_PRECISION (10) // n = 1. Three decimal points.
int main(){
float f;
int integerPart,decimalPart,sum=0;
scanf("%f",&f);
while(f >=1){
f /= 10;
integerPart = (int)f;
decimalPart = ((int)(f*N_DECIMAL_POINTS_PRECISION)%N_DECIMAL_POINTS_PRECISION);
//printf("%d\n",integerPart);
printf("%d\n",decimalPart);
sum += decimalPart;
}

printf("sum=%d\n",sum);
}