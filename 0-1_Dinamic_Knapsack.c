#include<stdio.h>
int max(int,int);
int dai(int n,int m,int p[],int w[])
{
	if(n==0||m==0)
		return 0;
	if(w[n-1]>m)
		return dai(n-1,m,p,w);
	else
		return max(dai(n-1,m,p,w),dai(n-1,m-w[n-1],p,w)+p[n-1]);
}
int max(int a,int b)
{
	return(a>b)?a:b;
}
 
void main()
{
	int m,n,p[10],w[10];
	printf("Enter the bag capacity and number of products\n");
	scanf("%d%d",&m,&n);
	printf("Ente the weights\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("Enter the profit\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Maximum profit %d\n",dai(n,m,p,w));
}
