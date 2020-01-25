#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?h_r=next-challenge&h_v=zen
int main() {
char arr[1000];
int x=0;
int y=48;
int num[10]={0,0};
int i=0;
scanf("%s",arr);
printf("%s\n",arr);
while(arr[i] != '\0')
{for(x=0,y=48;x<10,y<58;x++,y++){
	if(arr[i] == y)
	{
		num[x]++;
	}	

	}
i++;
}  for(int i=0;i<10;i++){
printf("%d ",num[i]);
}
    return 0;
}
