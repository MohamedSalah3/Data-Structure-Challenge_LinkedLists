#include <stdlib.h>
#include <stdio.h>
int profit(int arr_size,int *arr)
{int i=0,min_price=0,profit=0,Max=0,byear=0,syear=0;
	min_price=arr[0];
	Max=0;
	for(i=0;i<arr_size-1;i++)
	{
		/*if(arr[i] <= min_price){
		min_price=arr[i];
		byear=arr[i];
		}
		if(arr[i] >= Max ){
		Max=arr[i];
		syear=arr[i];}
		//if(min_price <= Max && byear < syear ){syear=i;}
		*/for(int j=i+1;j<arr_size;j++)
		{
		profit =arr[j] - arr[i];
		if(profit >= Max ){Max=profit;}
		}
	}
	
	return Max;
	
}


int main()
{int arr_size=0;
scanf("%d",&arr_size);
int *ptr=(int*) malloc(arr_size*sizeof(int));
for(int i=0;i<arr_size;i++){
scanf("%d",&ptr[i]);
}
int result = profit(arr_size,ptr);
printf("%d",result);
free(ptr);
return 0;
}