/*Dynamic Memory allocation*/
#include <stdio.h>
#include <stdlib.h>
int main()
{int i=0;
int *ptr=NULL;
ptr=(int*)malloc(10*sizeof(int));
printf("Enter 10 ones :)\n");
for(i=0;i<10;i++)
scanf("%d",&ptr[i]);
for(i=0;i<10;i++)
printf("%d\n",ptr[i]);
}