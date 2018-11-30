
//N.S ATHUL ANAND
//S3
//36
#include<stdio.h>

main()
{
	int i,n,ele,first,last,mid,a[50];
	printf("enter the size of the array\n");
	scanf("%d",&n);

	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter the element to be found\n");
	scanf("%d",&ele);
	
	last=n-1;
	first=0;

	while(last>=first)
	{
		mid=((first+last)/2);
	
		if(ele==a[mid])
		{
			found=1;
			printf("element found at tthe position %d ",mid);
			break;
		}

		if(ele>mid)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		} 
	}
	if (found=0)
	{
		printf("element not found");
	}
	else
	{	
		printf("element found");
	}
}
