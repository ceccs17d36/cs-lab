#include<stdio.h>
void quicksort(int N[25],int first,int last)
{
	int i,j,pt,temp;
	if(first<last)
	{
		pt=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(N[i]<=N[pt]&&(i<last))
			{
				i++;
			}
			while(N[j]>N[pt])
			{
				j--;
			}
			if(i<j)
			{
				temp=N[i];
				N[i]=N[j];
				N[j]=temp;
			}
		}
		temp=N[pt];
		N[pt]=N[j];
		N[j]=temp;
		quicksort(N,first,j-1);
		quicksort(N,j+1,last);
	}
}
int main()
{
	int count,i,N[25];
	printf("Enter the number of elments :\n");
	scanf("%d",&count);
	
	printf("Enter the elements :\n");
	for(i=0;i<count;i++)
	{
		scanf("%d",&N[i]);
	}
	quicksort(N,0,count-1);
	printf("Order of Sorted elements : \n");
	for(i=0;i<count;i++)
	{
		printf("%d\n",N[i]);
	}
}
