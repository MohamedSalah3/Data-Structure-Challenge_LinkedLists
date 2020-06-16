#include <stdio.h>
#include <stdlib.h>

int main()
{
int loop_counter=0;	
int c = 0;
int white_spaces=0;
int other=0;
int ndigits[10]={0};
while((c=getchar()) != EOF){
if((c ==' ') ||( c == '\n') || (c == '\t'))
{
	white_spaces++;
}else if((c >= '0') && (c <='9')){
(ndigits[c-'0'])++;
	
}else{other++;}	
putchar(c);
}
printf("white_spaces=%d\t other=%d\n",white_spaces,other);
printf("digits occurances");
for(loop_counter=0;loop_counter<10;loop_counter++)
{
	printf("%d,",ndigits[loop_counter]);
}
return 0;
}