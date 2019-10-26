#include<stdio.h>
typedef struct triangle
{
	int a ;
	int b ;
	int c ;
}tr;
typedef struct operations
{
	tr;
	int mult;
	int sum;
}op;
int main()
{tr tree[4];
op trees [4];
for(int i=0;i<4;i++){
	printf("Enter A for %d triangle",i);
	scanf("%d",&tree[i].a);}	
for(int i=0;i<4;i++){
	printf("You entered %d for %d a triangle\n",tree[i].a,i);}

for(int i=0;i<4;i++){
	printf("Enter B for %d triangle",i);
	scanf("%d",&tree[i].b);}
for(int i=0;i<4;i++){
	printf("You entered %d for %d b triangle\n",tree[i].b,i);}

for(int i=0;i<4;i++){
	printf("Enter C for %d triangle",i);
	scanf("%d",&tree[i].c);}	
for(int i=0;i<4;i++){
printf("You entered %d for %d c triangle\n",tree[i].c,i);}
	for(int i=0;i<4;i++){
	printf("You entered %d %d %d for %d c triangle\n",tree[i].a,tree[i].b,tree[i].c,i);}	
	
	
return 0;
}