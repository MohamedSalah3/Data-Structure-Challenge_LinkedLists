#include <stdio.h>

int main()
{
int x=6,counter=0;
for(int i=0;i<=10;i++)
{
for(int j=0;j<=10;j++){
counter++;
if(counter==x){
	continue;
	//break;
	}

printf("counter= %d\n",counter);
}


}
printf("x=%d\n",x);

return 0;
}