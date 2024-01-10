#include<stdio.h>
void main()
{
	int n=356,fd,ld,sum,i;
	
	
	printf("%d\n",n);
	ld=n%10;	
	for(i=0;n>=10;i++)
	{		
		n=n/10;
	}

	fd=n;
	sum=fd+ld;
	
	printf("Sum Of First And Last Digit = %d",sum);
	
}