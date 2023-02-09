//count digits from string


#include<stdio.h>

void main()
{
	
	char str[20];
	int a,count=0;
	
	printf("Enter a word :");
	gets (str);
	
	for (a=0; str[a]!='\0'; a++)
	{
		count+=1;
	}	
	printf("%d",count);
}
