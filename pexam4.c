#include<stdio.h>
int div(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("Both Are Divisible");
	}
	else
	{
		printf("Both Are Not Divisible");
	}
}

void main()
{
	int n;
	
	printf("Enter Value Of Number = ");
	scanf("%d",&n);
	
	div(n);
}