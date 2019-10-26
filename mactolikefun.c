#include <stdio.h> 

unsigned int result(unsigned int u32 ,unsigned int u8)
{
if(u8<31){	//u32= u32 & ~(1<<u8);
	u32 = u32 | (1<<u8);
	return u32;
}else{return u32;}
}
unsigned int poow2(unsigned int u32)
{int count=0;
for(int bit=0;bit<32;bit++)	
{
if((u32>>bit)&1){count++;}		
}	
if (count==1){return 1;}	
else{return 0;}	
	
}

main(){unsigned int u8,u32,reesult,result2;
	//scanf("%d",&u8);
	scanf("%d",&u32);
	//printf("%d",reesult=result(u32,u8));
	printf("%d",result2=poow2(u32));
}