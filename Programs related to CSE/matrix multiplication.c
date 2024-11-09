
// c program for matrix multiplication

#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],c[10][10],i,j,k,m,n,p,q;
	printf("enter the row and column of matrix 1:");
	scanf("%d %d",&m,&n);
	printf("enter the row and column of matrix 2:");
	scanf("%d %d",&p,&q);
	if(n!=p)
	{
		printf("multiplication not possible");
		exit(0);
	}
	printf("enter the elements of matrix 1:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("enter the elements of matrix 2:");
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("the product of 2 matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
