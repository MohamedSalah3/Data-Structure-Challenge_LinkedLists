
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char Nums='\0';
	int counter=0;
	int N=0;
	scanf("%d",&N);
	int *ptr =(int*) malloc(sizeof(int) * N);
	for(int i=0;i<=N;i++)
	{
		scanf("%c",&Nums);
		ptr[i]=Nums;
	}
	
	for(int i=0;i<N;i++)
	{
		if(ptr[i] ? ptr)
			counter++;
	
	}
	printf("%d",counter);
	/*
	for(int i=0;i<=N;i++)
	{
	printf("%c",ptr[i]);
			
	}
	*/
	return 0;
}