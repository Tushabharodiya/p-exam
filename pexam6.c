#include<stdio.h>

struct mobile{
	char c_name[100];
	char color[100];
	char modal[100];
	int price;
};
void main()
{
	int n,i;
	
	printf("Enter Number Of Mobile = ");
	scanf("%d",&n);
	struct mobile s[n];
	
	printf("Enter Mobile Detailes \n");
	for(i=0;i<n;i++)
	{
		printf("Enter Mobile Name = ");
		scanf("%s",&s[i].c_name);
		printf("Enter Mobile Color = ");
		scanf("%s",&s[i].color);
		printf("Enter Mobile Modal = ");
		scanf("%s",&s[i].modal);
		printf("Enter Mobile Price = ");
		scanf("%d",&s[i].price);
	}
	printf("------------Mobile Detailes------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i].c_name);
		printf("%s\n",s[i].color);
		printf("%s\n",s[i].modal);
		printf("%d\n",s[i].price);
	}
	
	
}