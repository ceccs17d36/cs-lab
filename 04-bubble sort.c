#include<stdio.h>

main()
{
	int a[50],n,i,u,l=0,j,k,tempo;
	printf("enter the size of the array\n");
	scanf("%d",&n);

	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	u=n-1;
	i=u;

	while(i>=l)
	{
		j=l;
		while(j<i)
		{
			if(a[j]>a[j+1])
			{	
				tempo=a[j];
				a[j]=a[j+1];
				a[j+1]=tempo;
				
			}
			j=j+1;
		}
		i=i-1;
		
	}
	
	printf("the output is \n");
	for(k=0;k<n;k++)
	{
		printf("%d\n",a[k]);
	}
}

										

		
	
