#include<stdio.h>
int main()
{
	int n,i,a[10];
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered elements are");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
