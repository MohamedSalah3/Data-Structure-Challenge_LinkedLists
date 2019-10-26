#include <stdio.h>
int main()
{
	char printed;
	for(int row =0 ;row<=8;row++){
	for(int col=0;col<=8;col++)
	{
		if((row==0)||((row>=1 && row<=3)&&(col==4||col==8))||(row==4)&&(col==5||col==7))
		{printed = 'p';}
	else{printed= ' ';}
	
	
	printf("%c",printed);
	}	
	printf("\n");
	}
	
	
	
	
	
	return 0;
}