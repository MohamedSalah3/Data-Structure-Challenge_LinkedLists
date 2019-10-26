//https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
int *p = (int*)malloc(n * sizeof(int)); 
int *S = (int*)malloc(n * sizeof(int));     
triangle TEMPO;
int Temp1,Temp;
for(int i=0;i<n;i++){
p[i]=(((tr[i].a)+(tr[i].b)+(tr[i].c)) / 2);
S[i]=(int)sqrt((int) (p[i]*(p[i]-(tr[i].a))*(p[i]-(tr[i].b))*(p[i]-(tr[i].c))));
printf("%d\t %d\n",p[i],S[i]);
}
for(int M=0;M<n*n;M++){
for(int i=0;i<n;i++){
for(int j=1;j<n;j++){
if(S[i]>S[j])
{
Temp1=S[i];
S[i]=S[j];
S[j]=Temp1;
Temp=p[i];
p[i]=p[j];
p[j]=Temp;
}
}
}}
printf("AFTER\n");
for(int i=0;i<n;i++){
printf("%d\t %d\n",p[i],S[i]);
}
for(int M=0;M<n*n;M++){
for(int i=0;i<n;i++){
for(int j=1;j<n;j++){
if(S[i]>(int)sqrt((int) (p[j]*(p[j]-(tr[j].a))*(p[j]-(tr[i].b))*(p[j]-(tr[j].c)))))
//if(p[i]>(((tr[j].a)+(tr[j].b)+(tr[j].c)) / 2)/*||S[i]>(int)sqrt((int) (p[j]*(p[j]-(tr[j].a))*(p[j]-(tr[i].b))*(p[j]-(tr[j].c))))*/)
{
TEMPO.a=tr[i].a;
TEMPO.b=tr[i].b;
TEMPO.c=tr[i].c;
tr[i].a=tr[j].a;
tr[i].b=tr[j].b;
tr[i].c=tr[j].c;
tr[j].a=TEMPO.a;
tr[j].b=TEMPO.b;
tr[j].c=TEMPO.c;
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
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}