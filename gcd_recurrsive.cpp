#include<stdio.h>
int gcd (int ,int );

main()
{
	int a,b,igcd;
	printf("enter the  numbers\n");
	scanf("%d	%d",&a,&b);
	
	igcd=gcd(a,b);
	printf("the gcd of %d and %d is %d",a,b,igcd);
}
int gcd(int p,int q)
{
	int remainder,t;
	if(p<q)
	{
	t=p;
	p=q;
	q=t;	
	}
	remainder=p%q;
	if(remainder==0)
	return q;
	else
	return (gcd(q,remainder));
	
	
}
