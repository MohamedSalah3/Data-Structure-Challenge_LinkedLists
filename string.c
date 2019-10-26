#include <stdio.h>

char* S(char string){
int i=0;
char *ptr=string;
while(string[i] != '\0')
{	
i++;	
}
string[0]=string[i-1];	
string[1]=' ';	
string[2]=string[i-2];	
	

return ptr;	
}
int main()
{
int i=0;
char s[100] ={'A','P','P','l','e','\0'};
char *ptr=S(s);
for(int i=0;i<3;i++)
{	printf("%c",ptr[i]);
	
}	
}