#include<stdio.h>
int cube(int i);
void beep(void);
main()
{
	int input;
	printf("Entr the input\n");
	scanf("%d",&input);
	if(input<1)
	{
		beep();
		printf("\nInvalid integer\n");
	}
	else
	{
		printf("The cube of %d is %d\n",input,cube(input));
	}
}
int cube(int i)
{
	int cubic;
	cubic=i*i*i;
	return cubic;
}
void beep(void)
{
	printf("\a");
}
