#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?h_r=next-challenge&h_v=zen
int main() {
char arr[1000];
char x= '1';
int num[10]={0,0};
int i=0;
scanf("%s",arr);
printf("\n%d\n",x);
printf("%s\n",arr);
while(arr[i] != '\0')
{
	if(arr[i] == '0')
	{
		num[0]++;
	}	
	if(arr[i] == '1')
	{
		num[1]++;
	}	
	if(arr[i] == '2')
	{
		num[2]++;
	}	
	if(arr[i] == '3')
	{
		num[3]++;
	}	
	if(arr[i] == '4')
	{
		num[4]++;
	}	
	if(arr[i] == '5')
	{
		num[5]++;
	}	
	if(arr[i] == '6')
	{
		num[6]++;
	}	
	if(arr[i] == '7')
	{
		num[7]++;
	}	
	if(arr[i] == '8')
	{
		num[8]++;
	}	
	if(arr[i] == '9')
	{
		num[9]++;
	}	
	
	
i++;
}  for(int i=0;i<10;i++){
printf("%d ",num[i]);
}
    return 0;
}
