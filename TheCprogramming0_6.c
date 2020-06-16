#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
int getline(char* string,int maxline);
void copy(char* string1,char* string2);

int main()
{
int c = 0;	
int loop = 0;	
char line[MAX]={'h','e','l','l','o','\0'};
char longest[MAX];
	
	copy(line,longest);
	while( longest[loop] != '\0')
	{
		printf("%c",longest[loop]);
		loop++; 		
	}
	printf("%d",getline(longest,MAX));

	
	return 0;
}

int getline(char* string,int maxline){
	int loop = 0,c = 0;
	for(loop = 0;((c=getchar()) != EOF) && c != '\n' && loop < maxline-1;loop++)
	{
		
		string[loop] = c;
		
	}
	while( string[loop] != '\0' ){
		loop++;
	}
	maxline=loop;

	
	return maxline;
}


void copy(char* string1,char* string2){
	
	int loop = 0;
	while( string1[loop] != '\0'){
		string2[loop]=string1[loop];
		loop++;
	}
	string2[loop]=string1[loop];
}