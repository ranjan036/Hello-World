#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node ;
 node *CreateLinkList(int);
void addatbeg(node **,int);
void addafter(node *,int,int);
void display( node*);
int main()
{
 int n;
 node *HEAD;
 printf("Number of terms in the list\n");
 scanf("%d",&n);
 HEAD = CreateLinkList(n);
 display(HEAD);
 addatbeg(&HEAD,99);
 printf("The new linkedList\n\n");
 display(HEAD);
 addafter(HEAD,4,888);
 display(HEAD);
}
node *CreateLinkList(int n)
{
	int i=0;
	node *head=NULL;
    node *temp =NULL;
    node *p=NULL;
	for(i=0; i<n; i++)
	{
		temp= ( node*)malloc(sizeof( node));
		printf("\nEnter the date of node: %d ",i+1);
		scanf("%d",&temp->data);
		temp->next = NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			p=head;
			while(p->next !=NULL)
			    p = p->next;
			p->next = temp;
		}
	}
	return head;
}
void addatbeg(node **head,int num)
{
//	node *p;
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->data = num;
	temp->next =*head;
	*head=temp;
	
	
}
void addafter(node *head,int loc,int num)
 {
 	node *temp;
 	temp=head;
 	int i;
 	for(i=0;i<loc;i++)
 	{
 		temp=temp->next;
 		if(temp==NULL)
 		{
 			printf("End of linked List\n");
		}
		
 		
	}
	node *r;
	r=(node*)malloc(sizeof(node));
    r->data=num;
    r->next=temp->next;
    temp->next=r;
 	
 }
void display( node *head)
{
	printf("---------------------\n\n");
	printf("The list items are \n\n");
     node *p=NULL;
	if(head==NULL)
		printf("\nEmpty Man");
	
	else
	{
		
		p=head;
		while(p!=NULL)
		{
			printf("%d->",p->data);
			p=p->next;
		}
	}
}
