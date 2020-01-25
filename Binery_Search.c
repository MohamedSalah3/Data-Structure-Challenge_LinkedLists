#include "Binery_Search.h"
int main()
{signed char Return_Value=0;
	signed int arr[MAX]={1,2,3,4,5,6,7,8,9,10};
	for(unsigned int test=0;test<MAX+1;test++){
	Return_Value=Binery_Search(arr,MAX,test);
	printf("%d\n",Return_Value);
	}
return 0;	
}