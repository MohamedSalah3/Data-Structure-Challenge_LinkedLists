/*
 * This file is a test case you may use and change to check your code
 */
//#include "0506Question1.h"
#include <stdio.h>
int wordOccurrence (char* str, char* word)
{int j=0,i=0,max=0,buf=0,count=0,occ=0;
while(word[i] != '\0')
{
	while(str[j] != '\0')
	{
		if(word[i] == str[j])
		{
			count++;
			if (count >= max){
				buf++;
				max=count;}
		}else{count =0;
		}
		j++;
	}
	
i++;
}	

	occ=buf;
	return occ;
}
int main()
{
	int result;
	//FILE* testCase;
	//FILE* actualResult;
	char str[] = "Welcome to Sprints online exam, Good Luck for everyone in Sprints.";	// The array
	char word[] = "Welcome";

	result = wordOccurrence(str, word);
   // printf(actualResult, "%d", result);	// The result must be 2
	printf("%d",result);
    return 0;
}
