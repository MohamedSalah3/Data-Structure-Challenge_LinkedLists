#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i=0,c=0;
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    printf("%s\n",s);
	while(s[i] != '\0'){
		if(s[i] == ' ')
          {
               s[i] = '\n';
          }
	i++;
	}
	printf("%s\n",s);

    //Write your logic to print the tokens of the sentence here.
    return 0;
}

