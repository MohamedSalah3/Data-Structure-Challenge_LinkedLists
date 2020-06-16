#include <stdio.h>
#include <stdlib.h>

int power(int x,int y);
int main()
{
int Ans=0;	
	
	Ans=power(2,5);
	printf("%d\n",Ans);
	return 0;
}

int power(int x,int y)
{int p=1;

while(y > 0){
	p=p*x;
	y--;
}		

return p;
}