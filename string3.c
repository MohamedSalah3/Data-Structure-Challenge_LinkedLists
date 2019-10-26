#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char Str[10000];
int j,max;
int i,n=0;
scanf("%d",&j);
for(i=0;i<j;i++)
{n=0;
 scanf("%s",Str);
while(Str[n] != '\0' )
{
    n++;
}
max=n;
for(int i=0;i<max;i+=2)
{
    printf("%c",Str[i]);
}
printf(" ");
for(int j=1;j<=max;j+=2)
{
 printf("%c",Str[j]);
}
printf("\n");

}
      
    return 0;
}
