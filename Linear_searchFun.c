#include "Linear_search.h"

signed char Linear_Search(signed int *arr,unsigned int size,unsigned int value)
{unsigned int Flag=size;
	for(unsigned int Index=0;Index<size;Index++)
	{
		if(arr[Index]==value)
		{
			Flag=size;
			return Index;
		}
		else
		{
			Flag--;
			
		}
		
		
	}
	if(Flag == 0)
	{
		return -1;
		
	}
	
}