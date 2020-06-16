/*AAA. Max subsequence
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a string S that contains N characters. Your task is to determine the maximum possible size of the subsequence T of S such that no two adjacent characters in T are the same.

Note: The string contains only lowercase English alphabets.

Input
First Line contain Single integer N (1≤N≤105) denoting the size of the string.

Second Line contain String S.

Output
print a single line containing one integer that represents the maximum size of the subsequence that satisfies the provided condition.

Examples
inputCopy
5
ababa
outputCopy
5
inputCopy
5
aaaac
outputCopy
2
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int arr[2];
	char characters='\0';
	int counter=0,count0=0;
	int N=0;
	scanf("%d",&N);
	int *ptr =(int*) malloc(sizeof(int) * N);
	for(int i=0;i<=N;i++)
	{
		scanf("%c",&characters);
		ptr[i]=characters;
	}
	for(int j=0;j<N;j++){
	for(int i=count0;i<N;i++)
	{
		arr[0]=ptr[count0];
		arr[1]=ptr[i];
	if(arr[0] != arr[1])
		counter++;
	printf("arr 0 =%c",arr[0]);		
	printf("arr 1=%c\n",arr[0]);
	}
	count0++;
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