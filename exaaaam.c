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
		}else{count =0;}
		j++;
	}
	
i++;
}	
printf("%d %d ",max,count);
	occ=buf;
	return occ;
}

int main()
{
	int result;
	
	char str[] = "Welcome to Sprints online exam, Good Luck for everyone in Sprints.";	// The array
	char word[] = "Sprints";

	result = wordOccurrence(str, word);
    printf("%d", result);	// The result must be 2
	
    return 0;
}
