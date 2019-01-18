#include<stdio.h>
int fib(int);
main()
{
	
	int i,n;
	printf("Numer of terms of fibonacci series to be generated\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fib(i));
	}
}
int fib(int num)
{
	if((num==0)||(num==1))
	return(1);
	else
	return(fib(num-2)+fib(num-1));
}
