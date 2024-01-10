#include<stdio.h>
void main()
{
	int i,vowel=0,consonant=0;
	char name[100];
	
	printf("Enter string = ");
	gets(name);
	
	if(name[i]>='a' && name[i]<='z')
	{
		for(i=0;name[i]!=0;i++)
		{
			if(name[i]=='a' ||name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
			{
				vowel++;
			}
			else
			{
				consonant++;
			}
		}
	}
	else
	{
		printf("plz enter alphabet");
	}
	printf("The total number of consonant = %d",consonant);
}