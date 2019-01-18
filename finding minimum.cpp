
#include<stdio.h>
int min(int ,int);
main()
{
	int a,b;
	printf("The numbers\n");
	scanf("%d %d",&a,&b);
	printf("The minimum of the two numbers is %d\n",min(a,b));
}
int min(int m,int n)
{
	int minimum;
	if(m>n)
	minimum=n;
	else
	minimum=m;
	return minimum;
}

