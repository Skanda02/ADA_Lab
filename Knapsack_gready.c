#include<stdio.h>

void main()
{
	int n,i,j;
	float temp,p[10],w[10],ratio[10],total,m;
	printf("Enter the number of items and max capacity");
	scanf("%d%f",&n,&m);
	printf("Enter the profit\n");
	for(i=0;i<n;i++);
	scanf("%f",&p[i]);
	printf("Enter the weight\n");
	for(i=0;i<n;i++)
	scanf("%f",&w[i]);
	for(i=0;i<n;i++)
	ratio[i]=p[i]/w[i];
	
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(ratio[i]<ratio[j])
	{
		temp=ratio[j];
		ratio[j]=ratio[i];
		ratio[i]=temp;
		
		temp=w[j];
		w[j]=w[i];
		w[i]=temp;
		
		temp=p[j];
		p[j]=p[i];
		p[i]=temp;
	}
	printf("Knapsack Problem using Greedy Algorithem:\n");
	for(i=0;i<n;i++)
	{
		if(w[i]>m)break;
		else
		{
			total=total+p[i];
			m=m-w[i];
		}
	}
	if(i<n)
	{
		total=total+(ratio[i]*m);
	}
	printf("The maximum value is %f",total);
}
	
