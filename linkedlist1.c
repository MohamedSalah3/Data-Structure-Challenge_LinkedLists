#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node; 
//return address of the head and takes the number of nodes as an input
node* create_linkedlist(int n)
{	int i=0;
	node* head=NULL;
	node* temp=NULL;
	node* p=NULL;
	for(i=0;i<n;i++)
	{	node *temp =(node*)malloc(sizeof(node));
		printf("enter node number %d ",i);
		scanf("%d",&(temp->data));
		temp->next=NULL;
		if(head == NULL)//empty list
		{
			head=temp;
		}
		else
		{
			p=head;
			while(p->next != NULL)
			{	
				p=p->next;	
			}
			p->next=temp;			
		}
	}
	return head;
}
void print(node* head)
{	node *p = head;
	while(p != NULL)
	{	printf("data equals %d\n",p->data);
		p=p->next;	
	}
}

int main()
{
node *A=NULL;
int count=0,n;
printf("Num of nodes\n");
scanf("%d",&n); 
A=create_linkedlist(n);
node *p=A;//insert at tail
node *temp =(node*)malloc(sizeof(node));	
/*temp->data=100;
temp->next=NULL;
while(p->next != NULL)
	p=p->next;
		
	p->next=temp;
	//insert at begin
	node *temp =(node*)malloc(sizeof(node));
	*//*temp->data=0;
	temp->next=A;
	A=temp;*/
	
	
//at position 3

while (p->next != NULL)
{
	count++;
	p=p->next;
	if(count==2){break;}
}
temp->next=p->next;
p->next=temp;
temp->data=150;
	
print(A);
return 0;
}
