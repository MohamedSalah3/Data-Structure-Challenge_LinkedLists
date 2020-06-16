/*Pattern cone*/



#include <stdio.h>


int main(){
	
	int i=0,j=0,n=0;
	char printed=' ';
	scanf("%d",&n);
	if(n % 2){
for(i=0;i<n;i++){
for(j=0;j<n;j++)
{
	if(i==j||j==0||(i+j==n-1)||j==n-1||i==(n-1)/2)
	{

		printed='*';
		printf("%c",printed);
		
		
		
	}else{
		
		
		printed=' ';
		printf("%c",printed);
	}
	
	
	
}

printf("\n");
}	
	
	
	}
	return 0;
}