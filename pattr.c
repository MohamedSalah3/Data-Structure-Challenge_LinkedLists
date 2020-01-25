#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
	{

    int n,count=1;
    int i, j,x,m,z;
	scanf("%d", &n);
	x=(n+n-1);
    m=(n+n-1);
	z=n-1;
while(count <= n+n){
for (i = count; i <= x; i++)
{
for (j = count; j <= m; j++)
{
if (i==count || i==x || j==count || j==m){
printf("%d",n);
}else{printf(" ");}
}
printf("\n");


}
n--;
count++;
}
	return 0;
	}