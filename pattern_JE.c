#include <stdio.h>
int main()
{
	char printed;
	for(int row =0 ;row<=4;row++){
	for(int col=0;col<=7;col++)
	{
		if(((row==0)&&(col==2||col==3))||((col==1)&&(row==1||row==3))||(col==0&&row==2)||((row==4)&&(col>=2)))
		{printed = 'j';}
	else{printed= ' ';}
	printf("%c",printed);
	}	
	printf("\n");
	}
	
	
	
	
	
	return 0;
}