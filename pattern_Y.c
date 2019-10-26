#include <stdio.h>

int main()
{
char printed;
int i=0;
scanf("%d",&i);
for(int row=0;row<=i;row++)
{
for(int col=0;col<=i;col++)
{
if((row<=i/2) && ((col==row) || (col==(i-row))) || ((row>=i/2)&&(col==i/2)))
{printed='*';}
else{printed=' ';}
printf("%c",printed);
}
printf("\n");
}
return 0;
}