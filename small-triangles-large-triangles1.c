//https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct triangle
{
	int a;
	int b;
	int c;
}triangle;

void sort_by_area(triangle* tr, int n)
{
	int p=0,under_square=0;
	int *s=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		p =(((tr[i].a)+(tr[i].b)+(tr[i].c))/2);
		//printf("%d\n",p);
		s[i]= p*(p-(tr[i].a))*(p-(tr[i].b))*(p-(tr[i].c));
		//s[i]=(int)sqrt(under_square);
	}
	for(int i=0;i<n;i++)
	{
	printf("%d\n",s[i]);
	}
	
	for(int x=0;x<100;x++){
	for(int i=n;i>=0;i--){
		for(int j=1;j<i;j++){
			if(s[j-1] > s[j])
			{int temp1=0,temp2=0,temp3=0;
				temp1=tr[j-1].a;
				temp2=tr[j-1].b;
				temp3=tr[j-1].c;
				tr[j-1].a=tr[j].a;
				tr[j-1].b=tr[j].b;
				tr[j-1].c=tr[j].c;
				tr[j].a=temp1;
				tr[j].b=temp2;
				tr[j].c=temp3;
				
			}
			
		}
	}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
//	printf(" _________---_______\n");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}