#include<stdio.h>
int main()
{
	int i,n,sum=0,a[20];
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i]*a[i];
	}
	printf("the square of arrays is %d",sum);
}
