#include <stdio.h>

int main()
{char printed;
	for(int row=0;row<=8;row++){
		for(int col=0;col<=4;col++)
		{
		if(((col==2))||((col==1||col==3)&&(row>0&&row<3))||(row==2))	
		{printed='*';}
		else{printed = ' ';}			
			printf("%c",printed);
		}
	printf("\n");}
	
	
	
	
	
return 0;	
}