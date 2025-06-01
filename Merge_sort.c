#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mergesort(int[],int,int);
void merge(int[],int,int,int);

void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

void merge(int a[],int low,int mid,int  high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	int b[100000];
	
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	
	while(i<=mid)
	{
		b[k++]=a[i++];
	}
	
	while(j<=high)
	{
		b[k++]=a[j++];
	}
	
	for(k=low;k<=high;k++)
	{
		a[k]=b[k];
	}
}

void genran(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
}

void main()
{
	int set[]={5000,10000,15000,20000,25000,30000};
	int num=sizeof(set)/sizeof(set[0]);
	double time_taken[num];
	clock_t start,end;
	for(int i=0;i<num;i++)
	{
		int n=set[i];
		int *a=(int*)malloc(n*sizeof(int));
		genran(a,n);
		start=clock();
		mergesort(a,0,n-1);
		end=clock();
		time_taken[i]=((double)(end-start))/CLOCKS_PER_SEC;
		free(a);
	}
	printf("set of number\tTime taken in sec\n");
	for(int i=0;i<num;i++)
	{
		printf("%d\t\t%f\n",set[i],time_taken[i]);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
