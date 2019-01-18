#include<stdio.h>
long double fact(double);
main()
{
	unsigned int num;
	long factorial;
	printf("Enter the number\n");
	scanf("%d",&num);
	factorial=fact(num);
	printf("\nThe factorial of given number is %d \n",factorial);
}
long double fact(double n)
{
	long lfact;
	int i;
	if(n==0)
	lfact=1;
	else
	{
		lfact=1;
		for(i=2;i<=n;i++)
		lfact=lfact*i;
	}
	return lfact;
}

