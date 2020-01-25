#include <stdio.h>

int wordOccurrence (char* str, char* word)
{int j=0,i=0,count=0,occ=0;

	while(word[i] != '\0'){count++;i++;}

	while(str[i] != '\0')
	{	for(int j=0;j<count;j++)
		{
			if(str[i]==word[j]){occ++;}
		}
	i++;
	}
	printf("%d %d %d\n",count,i,occ);
	return occ;
}

int main()
{
	int result;
	//FILE* testCase;
	//FILE* actualResult;
	char str[] = "Welcome to Sprints online exam, Good Luck for everyone in Sprints.";	// The array
	char word[] = "Sprints";

	result = wordOccurrence(str, word);
    printf("%d", result);	// The result must be 2
    return 0;
}

