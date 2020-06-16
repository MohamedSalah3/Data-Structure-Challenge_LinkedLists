#include <stdio.h>
#include <stdlib.h>
void fun (double Car_Value,int Number_of_years);

int main (void){
double car_price=0.0;
int numofyears=0;
printf("Enter Car price \n");
scanf("%lf",&car_price);
printf("Enter number of years\n");
scanf("%d",&numofyears);	
fun(car_price,numofyears);
return 0;
}



void fun (double Car_Value,int Number_of_years){
int i=0;
for(i=0;i<Number_of_years;i++){
Car_Value -= ((float)5/(float)100)*Car_Value;
Car_Value -= ((float)4/(float)100)*Car_Value;
printf("Car_Value=%f\n",Car_Value);
}



}