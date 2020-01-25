#include <math.h> 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     int t1=3;
     int t2=5;
    int n,sum=0,comp=0,count=0; 
    scanf("%d",&n);
    int *ptr=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)
    {
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
    comp = ptr[i];
   while(count < comp)
   {
		if((count % 3)==0 || (count % 5)==0   )
		{
			sum+=count;
		}
	
   count++;
   }
   printf("%d %d\n",count,sum);
    sum=0;
	count=0;
    }
    
    return 0;
}

