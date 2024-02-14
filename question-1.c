//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

#include<stdio.h>
ans()
{
int a[100],n,i,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			printf("\nenter the elemetnts of array");
            scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
		sum=sum+a[i];
	}
	printf("\nsum=%d\n",sum);
}
void main()
{
	ans();
}

	