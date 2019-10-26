#include <stdio.h>
int findpow3(unsigned int u32)
{if(u32==1 || u32==0){
	return 1;
}else
{
while(1)
{
if((u32 % 3)== 0 )	
{
	if(u32==3){return 0;}
	u32 /= 3;
}
else
{
	return 1;
}
	
}	
	
	
}	
	
	
	
	
}


int main()
{
int z;
unsigned int u32=0;
scanf("%d",&u32);
z=printf("%d",findpow3(u32));
return 0;
}