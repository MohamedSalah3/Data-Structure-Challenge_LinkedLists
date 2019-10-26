/*1 of 6*/
#include<stdio.h>
int arr[256];
unsigned int* result_upper_lower(int *ptr,unsigned int upper,unsigned int lower){
int i=0;
int *p2r=arr;
if(upper<lower || upper==lower){
for(int i=0;i<2;i++)
{
	p2r[i]=0xff;
	
}
return p2r;
}else{for(int i=0;i<256;i++)
{
arr[i]=lower++;	
}
return (ptr);			
}	
	
}
int main()
{unsigned int upper=0,lower=0,*ptr;
//scanf("%d/%d",&upper,&lower);
scanf( "%u %u", &upper,&lower );
//printf("%d\t",upper);
//printf("%d\n",lower);
ptr=result_upper_lower(arr,upper,lower);
if(upper<lower || upper==lower){
for(int i=0;i<2;i++)
{
	printf("0x%X\n",ptr[i]);
	
}
}
for(int i=upper;i>lower;i--)
{	
printf("%d\n",ptr[i]);			
}


return 0;	
}