#include<stdio.h>
void main()
{
	int n,i,sum=0;
	int a[100],b[100],c[100];
	int *p1,*p2,*p3;
	p1=&a[100];
	p2=&b[100];
	p3=&c[200];
	
	printf("Enter Value Array Size = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("Sum Of Two Array Element = \n");
	for(i=0;i<n;i++)
	{
		p3=&c[i];
		printf("%d\n",*p3);
	}
	
}