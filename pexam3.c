#include<stdio.h>
void main()
{
	int i,j,s;
	
	for(i=10;i>=6;i--)
	{
		for(s=i;s<=9;s++)
		{
			printf("-");
		}
		for(j=i;j>=6;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}