#include<stdio.h>
int set[10],x[10],t,n;
void subset(int s,int k)
{
	if(s==t)
	{
		printf("{");
		for(int i=0;i<=n;i++)
		{
			if((x[i]))
			{
				printf("%d ",set[i]);
			}
		}
		printf("}");
		printf("\n");
		return;
	}
	if(s>t||k>n)
	return;
	x[k]=1;
	subset(s+set[k],k+1);
	x[k]=0;
	subset(s,k+1);
}
void main()
{
	printf("Enter the number of elements:\n");	
	scanf("%d",&n);
	printf("Enter set elements in increasing order :\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&set[i]);
	}
	printf("Enter required target sum:");
	scanf("%d",&t);
	printf("The subet are:\n");
	subset(0,1);
}
