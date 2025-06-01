#include<stdio.h>

void warshall(int a[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
}



void main()
{
	int n,i,j,a[10][10];
	printf("Enter the number of vertex\n");
	scanf("%d",&n);
	printf("Enter the matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	warshall(a,n);
	printf("Trasitive closure of graph is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
}
	
