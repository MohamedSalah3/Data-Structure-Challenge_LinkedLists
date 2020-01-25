#include <stdio.h>
#include <stdlib.h>//https://www.youtube.com/watch?v=6wXZ_m3SbEs&list=PLdo5W4Nhv31YIeatFDBuAvPlNwaKejIKC&index=4
typedef struct node
{
int data;
struct node* next;
}node;

int main()
{	int n;
	puts("enter the number of nodes\n");
	scanf("%d",&n);
node* head=NULL;
node* p=NULL;
node* newnode=NULL;	
for(int i=0;i<n;i++)
{
	newnode=(node*)malloc(sizeof(node));
	if(head==NULL)
	{
		head=newnode;
		p=head;
	}
	else
	{
	while(p->next != NULL)
	{
		p=p->next;
	}
	p->next=newnode;
	p=newnode;	
	}
	
	
}
return 0;
}