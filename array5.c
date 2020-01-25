#include <stdio.h>


int main()
{
    int n=0;
    scanf("%d",&n);
int *arr =(int*)malloc(n*sizeof(int));


for(int i=n-1;i >= 0; i--)
{
scanf("%d",&arr[i]);

}

for(int i=0;i<n; i++)
{
printf("%d ",arr[i]);

}



}