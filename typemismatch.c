#include<stdio.h>
int main()
{
    //extern int fun(float);
	extern int fun(int);
    int a;
    a = fun(3.14);
    printf("%d\n", a);
    return 0;
}
int fun(int aa)
{
	printf("%d\n",aa);
//    return /*(int)*/++aa;
	return /*(int)*/aa++;
}