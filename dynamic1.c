#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
int main() {
	int n=0,sum=0;
	scanf("%d",&n);
	int* arr=(int*)calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	//printf("Enter next\n");
	}
	
	for(int i=0;i<n;i++)
	{
	sum += arr[i];
	
	}
	
	printf("%d\n",sum);



   return 0;
}

