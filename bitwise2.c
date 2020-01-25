  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
//Complete the following function.


void calculate_the_maximum(int n, int k) {
 int maxand=0,maxor=0,maxxor=0;
for(int a=1;a<=n;a++)
{for(int b=a+1;b<=n;b++){
	if(((a&b) < k)&&((a&b) > maxand))
	{
		maxand=(a&b);
	}
	if(((a|b) < k)&&((a|b) > maxor))
	{
		maxor=(a|b);
	}
	if(((a^b) < k)&&((a^b) > maxxor))
	{
		maxxor=(a^b);
	}
}
}
printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
