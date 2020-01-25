#include <stdio.h>
#include <stdlib.h>
int main()
{int d,n,temp1,temp,x,i;
scanf("%d%d",&n,&d);
printf("%d%d",n,d);
int* a = malloc(n * sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);

}/*
for(i=d-1,x=1;i>0,x<d;i--,x++)
{
temp1=a[0];
a[0]=a[d];
a[d]=temp1;
temp=a[x];
a[x]=a[i];
a[i]=temp;
}*/
for(i=d,x=0;i>0,x<d;i--,x++)
{
temp=a[x];
a[x]=a[i];
a[i]=temp;
}
for(int i=0;i<n;i++)
{
printf("%d",a[i]);

}

}