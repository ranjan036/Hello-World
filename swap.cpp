#include<stdio.h>
void swap(int *,int *);
main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("\nthe numbers afte swapping %d and %d\n",a,b);
}
void swap(int *p,int *q)
{
	int t;
	t=(*p);
	*p=(*q);
	(*q)=t;
	printf("\nnumbers in swap function are %d and %d\n",p,q);
	
}
