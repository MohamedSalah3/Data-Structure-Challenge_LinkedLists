/*Characters Counter*/
#include <stdio.h>
#include <stdlib.h>

int mian()
{
signed int Character=0;
unsigned long int counter=0;
Character = getchar();

while(Character != EOF)
{	
	putchar(Character);
	counter++;
	Character = getchar();
	if(Character == '\n'){counter=0;}
}





return 0;
}