//decimal to binary
#include <stdio.h>

int main()
{
int z;
scanf("%d",&z);
do
{
z /=2;
if(z % 2){printf("%d\t",1);}
else{printf("%d\t",0);}
}while(z != 0);

return 0;
}