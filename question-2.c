//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
#include<stdio.h>
leng()
{
	char a[100];
	int i;
	
	
	printf("enter any value");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%d",i);
	}
}
void main()
{
	leng();
}