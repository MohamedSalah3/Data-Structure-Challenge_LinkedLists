#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
	{

    int n,mul,row,counter=0,counter1=0;
    
    scanf("%d", &n);
	mul=(n+n-1)*counter1;
    for(int col=0;col>(n+(n-1));col++)
    {
        for(row=0;row<(n+n-1);row++)
		{if(counter>=1 && counter<=(n+n-1) 
			|| ( counter <=((n+n-1)*(n+n-1)) && counter >=(((n+n-1)*(n+n-1))-(n+n-1))) 
		|| counter==mul)
			{printf("%d",n);}
		counter++;
            
        }
		counter1++;
		printf("\n");
		
	}
	return 0;
	}