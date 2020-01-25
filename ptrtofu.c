#include <stdio.h>

typedef void (*ptr_to_Fun)(void);

void add(void);
ptr_to_Fun functionToadd=add;
int main()
{


functionToadd();

return 0;
}

void add(void)
{
	int x=5,y=8;
	printf("add=%d\n",x+y);
	
}