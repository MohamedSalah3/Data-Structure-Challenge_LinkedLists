#include<stdio.h>
int const x=10;
int main()
{/*
sturuct emp
{
	char n[10];
	int a;
	
};
struct emp e1 ={"Moha",23};
struct emp e2 = e1;
if(e2==e1){printf("True");}
printf("%x",-2>>1<<2);
*/
int *ptr;
ptr=&x;
printf("%d",*ptr);
*ptr=6;
printf("%d",*ptr);
return 0;
}