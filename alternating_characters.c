#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Complete the alternatingCharacters function below.
int alternatingCharacters(char* s,int size) {
int i=0,count_zeros=0;
while(s[i] != '\0'){
if(s[i]==s[i+1])
{
	s[i]='0';
}
if(s[i+1]=='0' && s[i-1]== '0')
{
	s[i]='0';
}
i++;
}
for(i=0;i<size;i++){
if(s[i] != '0'){printf("%c",s[i]);}else{count_zeros++;}
}
return count_zeros;
}

int main()
{int i=0,n=0;
	scanf("%d",&n);
	char* s=(char*)malloc(n*sizeof(char));
	for(i=0;i<n;i++){scanf("%c",&s[i]);}
	while(s[i]!='\0'){i++;}
	int count=alternatingCharacters(s,n);
    printf("%d\n",count);
	return 0;
}
