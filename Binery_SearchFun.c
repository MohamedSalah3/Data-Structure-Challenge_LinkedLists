#include "Binery_Search.h"
signed char Binery_Search(unsigned int *arr,signed int size,unsigned int value)
{
unsigned int Lower_Bound=0,index;

unsigned int Higher_Bound=(size-1);
unsigned int mid=((Lower_Bound + Higher_Bound)/2);
while(Lower_Bound <= Higher_Bound && Higher_Bound <= size && Lower_Bound >= 0 ){
if(arr[mid]==value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
mid = ((Lower_Bound + Higher_Bound)/2);
	return mid;
	break;
	}else if(arr[mid] < value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
	Lower_Bound = mid+1;
	mid =((Lower_Bound + Higher_Bound)/2);
if(arr[mid]== value){
	return mid;
	break;
}
}
else if(arr[mid] > value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
	
	Higher_Bound = mid-1;
	mid=((Lower_Bound + Higher_Bound)/2);
}
else
{
	return -1;
}


	
}

}