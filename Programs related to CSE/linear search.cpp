#include<stdio.h>
int main()
{
	int i,n,a[30],found=0,key;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elemets of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("key found %d",i+1);
			found=1;
			break;
		}
	}
	if(found==0)
	printf("elements required not found");
}
