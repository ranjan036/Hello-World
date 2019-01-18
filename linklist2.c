#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} node ;
node *CreateLinkList(int);
void InsertNode(node*,int,int);
void display( node*);
int main()
{
 int n;
 node *HEAD;
 printf("Number of terms in the list\n");
 scanf("%d",&n);
 HEAD = CreateLinkList(n);
 display(HEAD);
 InsertNode(HEAD,3,90);
 display(HEAD);
 return 0;
 
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
//insert node
void InsertNode(node *head,int loc,int num)
{
	node *temp=head;
	node *Newnode;
	node *oldnode;
	int k=0;
	Newnode=(node*)malloc(sizeof(node));
	Newnode->data=num;
	if(loc==1)
	{
		
		Newnode->next=temp;
		temp->next=Newnode;
		
	}
	else
	{
		
		while((temp !=NULL) && (k<loc))
	{
		k++;
		oldnode=temp;
		temp=temp->next;
		
	}
	
	oldnode->next=Newnode;
	Newnode->next=temp;
		
	}

	
	
}
void display( node *head)
{
	printf("\n---------------------\n\n");
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
