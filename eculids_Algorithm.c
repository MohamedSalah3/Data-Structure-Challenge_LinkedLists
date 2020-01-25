/*6/4
6-4=2
*/
//Euclids Algorithm 
#include <stdio.h>
#include <stdlib.h>
int GCD(int u,int v)
{int temp;
while( u >0  )
{
if(u<v)
{temp=u;
u=v;
v=temp;
}
u-=v;
}
return v;	
}


int main()
{	
	int x,y;
	while(scanf("%d %d",&x,&y)  && y != 0)
		if(x>0 && y>0){
			printf("%d/%d=%d/%d\n",x,y,x/GCD(x,y),y/GCD(x,y));
		}
	return 0;
}