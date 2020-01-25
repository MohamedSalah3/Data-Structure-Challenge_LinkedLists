#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
int arr [SIZE];
for(int i=0;i<10;i++)
{
arr[i]=2*(2+i);
printf("arr[%d]= %d \n",i,arr[i]);
}


return 0;
}