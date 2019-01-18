#include<stdio.h>
int max(int i,int j,int k);
main()
{
	int a,b,c,result;
	printf("Enter the three input\n");
	scanf("%d %d %d",&a,&b,&c);
	
	result=max(a,b,c);
	printf("The maximum number of the given three numer is %d\n",result);
}
int max(int i,int j,int k)
{
	int max;
	if(i>j && i>k)
	max=i;
	else if(j>k)
	max=j;
	else
	max=k;
	return(max);
}
