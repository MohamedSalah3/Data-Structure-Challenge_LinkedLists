//decimal to binary
#include <stdio.h>

int main()
{
int z,count;
scanf("%d",&z);
while(z != 0)
{
z /=2;
if(z%2){count++;}
}

return 0;
}