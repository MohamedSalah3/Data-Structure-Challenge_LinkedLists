#include<stdio.h>
int main()
{
    int max, i=3, j=2, k=2, m;
  // m = ++i && ++j && ++k;
    m = ++i && ++j && k++;
  max= j>k ? j>i? j:k:k>i? k:i;
	printf("max is%d, %d,%d, %d, %d\n", max,i, j, k, m);
 
 return 0;
}