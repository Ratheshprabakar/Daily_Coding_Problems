/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements
Sample INPUT 
[0,1,0,3,12]
Sample OUTPUT
[1,3,12,0,0]
*/
#include<stdio.h>
int main()
{
	int *input_array;
	int *temp_array;
	int array_size,i,k=0;
	printf("Enter the array size\t");
	scanf("%d",&array_size);
	input_array = (int*)malloc(array_size * sizeof(int)); 
	temp_array = (int*)malloc(array_size * sizeof(int)); 
	for(i=0;i<array_size;i++)
	{
		scanf("%d",&input_array[i]);
		if(input_array[i]!=0)
		{
			temp_array[k]=input_array[i];
			k++;
		}	
	}

	for(k;k<array_size;k++)
	{
		temp_array[k]=0;	
	}
	printf("The output array is:\n");
	free(input_array);
	for(i=0;i<array_size;i++)
	{
		printf("%d\t",temp_array[i]);	
	}
	free(temp_array);
}
