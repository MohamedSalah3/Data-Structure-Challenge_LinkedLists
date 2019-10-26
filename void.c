#include<stdio.h>
int main()
{int a=10;
char b;
void *v=&a ;
printf("%d",*((int*)v));

    return 0;
}