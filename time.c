#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,x;
    int n; 
    int temp=1,sum=0;
    scanf("%d",&t);
    int*ptr=(int*)calloc(t,sizeof(int));
    for(int a0 = 0; a0 < t; a0++){
         
        scanf("%d",&n);
    
    ptr[a0]=n;
    }
  
    //printf("%d\n",ptr[a0]);
    *ptr=temp;   
    while(temp != 0)
    {
        temp--;
        if((!(temp % 3)) || (!(temp %5)))
        {
            sum+=temp;
            
        }
        if((temp==0) ){printf("%d\n",sum);}
        
    }
        
        sum=0;
   ptr=ptr+1;     

  //  sum=0;

    //for(int a1=0;a1<t;a1++)

    return 0;
}

