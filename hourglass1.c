#include <stdio.h>
#include <stdlib.h>


int main (int argc, char const *argv[])
{
int arr[6][6];
	int loop1=0,loop2=0;
	for(loop1=0;loop1<6;loop1++)
	{
		for(loop2=0;loop2<6;loop2++)
		{
			arr[loop1][loop2]=0;
			
			
		}
	}
	for(loop1=0;loop1<6;loop1++)
	{
		for(loop2=0;loop2<6;loop2++)
		{
				
			printf("%d\t",arr[loop1][loop2]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}