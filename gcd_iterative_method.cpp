 #include<stdio.h>
 int gcd(int,int);
 main()
 {
 	//gcd by iterative method
    int a,b,igcd;
 	printf("Enter the two numbers\n");
 	scanf("%d	%d",&a,&b);
 	igcd=gcd(a,b);
 	printf("The gcd of %d and %d is %d",a,b,igcd);
 }
 int gcd(int p,int q)
 {
 	int t,remainder;
 	 	if(p<q)
 	{
 		t=q;
 		p=q;
 		q=t;
	 }
	remainder=p%q;
	while(remainder!=0)
	{
		p=q;
		q=remainder;
		remainder=p%q;
	}
	 
	  return q;
 	
 }


