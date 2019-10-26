#include<stdio.h>

int main()
{
char printed;

for(int row=0;row<=8;row++){
for(int col=0;col<=8;col++){
if((row>=0 && row <=4)&&(col==(row+4)||col==(4-row))||
(row>=5&&row<=8)&&(col==(row-4)||col==(8-(row-4))))
{printed = '*';}

else{printed=' ';}
printf("%c",printed);
}
printf("\n");
}




return 0;
}