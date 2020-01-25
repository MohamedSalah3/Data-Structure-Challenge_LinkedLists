#include <stdio.h>
#define SIZE 100
int main()
{
int arr[SIZE]={0},sum=0;
for(int i=0;i<SIZE;i++)
{
arr[i]=2*(2+i);
sum+=arr[i];
printf("arr[%d]= %d and Sum of %d elements = %d\n",i,arr[i],i,sum);
}
return 0;
}