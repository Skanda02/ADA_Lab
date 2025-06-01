#include<stdio.h>
#include<stdlib.h>
int count=0,col[20];
int issafe(int row)
{
	for(int i=1;i<row;i++)
	{
		if(col[i]==col[row]||abs(i-row)==abs(col[i]-col[row]))
		return 0;
	}
	return 1;
}

void nquee(int row,int n)
{
	for(int c=1;c<=n;c++)
	{
		col[row]=c;
		if(issafe(row))
		{
			if(row==n)
			{
				count++;
				printf("Solutin %d :\n",count);
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						if(col[i]==j)
							{
								printf("Q\t");
							}
						else
						{
							printf("*\t");
						}
					}
					printf("\n");
				}
				printf("\n");
			}
			else
			{
				nquee(row+1,n);
			}
		}
	}
}
void main()
{
	int n;
	printf("Enter the number of queens:");
	scanf("%d",&n);
	nquee(1,n);
	printf("Total number of solutions:%d\n",count);
}
