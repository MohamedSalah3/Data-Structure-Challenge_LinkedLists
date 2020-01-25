#include <stdio.h>

int main()
{
int i=0,n=0,j=0,x=0,z=0,occ=0;
char str[]="Welcome to Sprints online exam, Good Luck for everyone in Sprints.";
char word[20]="Sprints";

while(str[j-i] != '\0')
{z=1;
	while(word[i] != '\0')
{
	if(str[j+i] != word[i])
	{   z=0;
		break;
	}
//x+=word[i];
i++;
}
if(z == 1)
{
	occ++;
}
j++;
}
//printf("%c",str[j]);

printf("%d %d %d %d",x,occ-52,z,n);
return 0;
}