#include <stdio.h>
#define MAX 3
// pyramid pattern
int main()
{char printed;
int car=6;
for(int i=0;i<=3;i++)
{
	for(int j=0;j<=6;j++)
	{
	if(i>=j&&j<=car)	
	{printed = '*';}
	else{printed = ' ';}	
	printf("%c",printed);
	}
printf("\n");	
car--;
}



return 0;
}