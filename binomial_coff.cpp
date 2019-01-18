#include<stdio.h>
double fact (int);
int binomial(int ,int);
main()
{
	int n,k,BC;
	printf("printf enter the nuber n and k:\n");
	scanf("%d %d",&n,&k);
	BC=binomial(n,k);
	printf("the binomial coeffient %d",BC);
}
int binomial(int a,int b)
{
	int ibinomial;
	ibinomial=fact(a)/((fact(b))*(fact(a-b)));
	return ibinomial;
}
double fact( int n)
{
    int lfact;
	if((n==0)||(n==1))
	lfact=1;
	else
	return (n*fact(n-1))  ;
	
}

