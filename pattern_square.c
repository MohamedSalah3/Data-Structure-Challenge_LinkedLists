#include <stdio.h>

int main(){
	char printed;
for(int row=0;row<=8;row++)
{
	for(int col=0;col<=7;col++)
	{
	if(row==0||row==8){printf("*");}
	else{
	if(col==0 || col==7){printed='*';}
	else{printed=' ';}	
	printf("%c",printed);}
	}
	printf("\n");
}	
	
return 0;
}