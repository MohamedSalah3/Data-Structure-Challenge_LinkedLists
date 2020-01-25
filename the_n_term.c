#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) 
{
int x=0,i=0;
int *ptr=(int*)malloc(n*sizeof(int));
ptr[0]=a;
ptr[1]=b;
ptr[2]=c;
for(i=0;i<n;i++)
{if(i>2){
ptr[i]=ptr[i-1]+ptr[i-2]+ptr[i-3];	
}else{continue;}
}
x=ptr[i-1];
return x;
free(ptr);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

