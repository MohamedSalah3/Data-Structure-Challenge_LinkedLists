#include <stdio.h>

int main()
{
int y=0;
int x=10;
int *ptr=&x;
printf("%d\n",*ptr);
*ptr=y;
printf("%d\n",*ptr);
*ptr='y';
printf("%d\n",*ptr);

return 0;
}