#include<stdio.h>
int main()
{
	int a[100],n,i,j,swap;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d numbbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(a[j]>a[j+1])
	{
	swap=a[j];
	a[j]=a[j+1];
	a[j+1]=swap;
	}
	}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
	}
	
