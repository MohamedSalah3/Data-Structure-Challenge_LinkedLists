#include <stdio.h>
#include <string.h>
int main()
{
int i=0,n=0,j=0,x=0,z=0,occ=0,strLen=0,found=0,wordLen=0;
char str[]="Welcome to Sprints online exam, Good Luck for everyone in Sprints.";
char word[20]="Sprints";

    strLen  = strlen(str);  // Find length of string
    printf("%d\n",strLen);
	wordLen = strlen(word); // Find length of word


    /*
     * Run a loop from starting index of string to
     * length of string - word length
     *///- wordLen
    for(i=0; i<strLen ; i++)
    { 
        // Match word at current position
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            // If word is not matched
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        // If word have been found then print found message
	if (wordLen <= 1)
	{
		found=0;
	}    
	if(found == 1)
    {	
	occ++;
    printf("'%s' found at index: %d \n", word, i);
    }
}
	

printf("\n%d %d %d %d\n",x,occ,z,n);
return 0;
}