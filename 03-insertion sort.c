//N.S ATHUL ANAND
//S3
//36

#include <stdio.h>

int insertionsort(int array[], int size) 
{
	int i, j, temp;
	for (i=1; i<size; i++) 
	{
		temp = array[i];
		for (j=i-1; j>=0 && array[j] > temp; j--) 
		{
				array[j+1] = array[j];
		}
		array[j+1] = temp;
	}
}
void main() 
{
	int array[100], i, j, size;

	printf("enter size of the array : ");
	scanf("%d", &size);

	printf("enter array\n");
	for (i=0; i<size; i++) 
	{
		scanf("%d", &array[i]);
	}

	insertionsort(array, size);
	
	printf("sorted array\n");
	for (i=0; i<size; i++) 
	{
		printf("%d\n", array[i]);
	}
}
