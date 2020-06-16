/*
Input
Only one integer number n where (1≤n≤2∗105).

Output
Print n characters separated by spaces such that each character occurs an odd number of times.

Examples
inputCopy
4
outputCopy
a b c d
inputCopy
2
outputCopy
a b
inputCopy
6
outputCopy
a a a b b b
Note
In the third example character 'a' has been repeated three times and the same with character 'b' so "a a a b b b" is valid because every character occurs odd number of times.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{long long i=0;
long long Input=0;	
int reminder=0;
int devidor=0;
int counter=0;
int arr[27]={'\0'};
	char character='a';
	for(i=0;i<26;i++)
	arr[i]=character++;

	i=0;
	scanf("%d",&Input);
reminder=Input%26;
devidor=Input/26;
	while(Input&&Input<=26 && arr[i] != '\0'){

	printf("%c",arr[i]);
	i++;
Input--;
}
	i=0;

while(Input  && arr[i] != '\0'){
	counter++;	
	
	printf("%c",arr[i]);
if(counter == 3){
i++;
counter=0;
}
Input--;
}	
	return 0;
}