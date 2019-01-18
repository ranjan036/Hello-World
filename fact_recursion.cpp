#include<stdio.h>
long fact( int n);
main()
{
	int n;
long int factorial;
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	factorial=fact(n);
	printf("the factorial of %d is %d",n,factorial);
}
long fact( int n)
{
    long int lfact;
	if((n==0)||(n==1))
	lfact=1;
	else
	return (n*fact(n-1))  ;
	
}

