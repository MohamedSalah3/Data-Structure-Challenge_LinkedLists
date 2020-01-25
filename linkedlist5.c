#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	
int data ;
struct node *next;	
}node;

v
oid print(node* head)
{	node *p = head;
	while(p != NULL)
	{	printf("data equals %d\n",p->data);
		p=p->next;	
	}
}
int main()
{
node* head=NULL;
node* newnode=NULL;
node* p=NULL;
int n=0 ;
//number of nodes
printf("enter the number of nodes\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{newnode=(node*)malloc(sizeof(node));
if(head == NULL)
{
	head=newnode;
}	
else
{
p=head;
			while(p->next != NULL)
			{	
				p=p->next;	
			}
			p->next=newnode;	
}				
	
}
print(head);

return 0;
}