/*
 * This file is a test case you may use and change to check your code
 */
//#include "0363Question.h"

int minimumpages(int p, int n)
{
int ans=0;
int x=p-1;
int y=n-p;
if(x>y)
{ans=y;
}
else{ans=x;}
return ans;	//	Write your code here
}

int main()
{
	int *result;
	int arr_size = 12;	// array size
	int arr[] = {9, 31, 38, 5, 62, 44, 38, 17, 19, 38, 50, 31};	// array

	result = repeatedNumbers(arr_size,arr);
	for(int i = 0; result[i] != 0; i++)
	{
		printf("%d ", result[i]);	// The result 31 38
	}
	
    return 0;
}
