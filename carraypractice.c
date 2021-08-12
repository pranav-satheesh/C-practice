#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *array; //declaring a pointer to array
    int i,max = 0,min = 999, n;
    printf("Enter the number if elements in an array\t");
    scanf("%d",&n);
    array = (int *)malloc(n *sizeof(int));
    for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>max)
			max=array[i];
		else if(array[i]<min)
			min=array[i];
	}
    free(array);
	printf("\nThe Largest and Smallest Number in the given array is \t%d\t%d",max,min);


}