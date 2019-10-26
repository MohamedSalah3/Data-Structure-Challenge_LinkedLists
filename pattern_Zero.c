#include <stdio.h>


int main()
{
char printed;
for(int row=0;row<=8;row++)
{
	for(int col=0;col<=6;col++)
	{
	if(((col>=2 && col<=4)
		&&(row == 0||row == 8))||
	((col==1||col==5)
	&&
	(row==1 || row==7))||
	((col==0||col==6)&&(row>=2&&row<=6))
	)
		{
			printed='*';
		}
	else 
	{
		printed =' '; 
	}	
		printf("%c",printed);
	}
	printf("\n");
}
	
	




return 0;	
}