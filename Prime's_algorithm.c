#include<stdio.h>
int i,j,a,b,min,n,mincost=0,edges=1,cost[10][10],visited[10]={0};
void main()
{
	printf("Enter number of vertices:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix(0 = no edge):\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d",&cost[i][j]);
		if(cost[i][j]==0)
			cost[i][j]=999;
	}
	visited[1]=1;
	printf("Edges in MST:\n");
	while(edges<n)
	{
		min=999;
		for(i=1;i<=n;i++)
			if(visited[i])
				for(j=1;j<=n;j++)
				if(!visited[j] && cost[i][j]<min)
				{
					min=cost[i][j];
					a=i;
					b=j;
				}
		visited[b]=1;
		printf("Edge(%d,%d)->%d\n",a,b,min);
		mincost+=min;
		edges++;
		cost[a][b]=cost[b][a]=999;
	}
	printf("Total cost =%d\n",mincost);
}	

