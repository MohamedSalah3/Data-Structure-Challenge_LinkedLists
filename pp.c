//#include <stdio.h>

//int main()
//{
	
/*
unsigned char A=3,B=7,C=2,Max=0;
if(Max<A){
Max=A;
if(Max<B){
Max=B;
if(Max<C){

Max=C;
}
}
}
printf("MAx=%d",Max);
*//*
char printed='*';
int N=0,counter_x=0,counter_y;
scanf("%d",&N);

for(counter_y=0;counter_y< N;counter_y++)
{
	
	for(counter_x=N;counter_x< 0;counter_x--)	
	{/*
		if(counter_y == 0)
		{
			printed='*';
			
		}Ielse{
			printed=' ';
		}
		printf("printed");
		
		printed='*';
		printf("printed");
	
	}
	printf("\n");
}
*/
#include <stdio.h>

int main()
{
char printed;
int i=0;
scanf("%d",&i);
i*=2;
for(int row=0;row<=i;row++)
{
for(int col=0;col<=i;col++)
{
if((row==col )|| (row==col/2)) 
{printed='*';

}
else{printed=' ';}
printf("%c",printed);
}
printf("\n");
}
return 0;
}

