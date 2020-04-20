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
	int size,temp,temp_size,i,k=0;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	temp_size=size-1;
	input_array=(int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&temp);
		if(temp==0)
		{
			input_array[temp_size]=temp;
			temp_size--;	
		}	
		else
		{
			input_array[k]=temp;
			k++;
		}
	}
	printf("The Resultant Array is \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",input_array[i]);	
	}
	free(input_array);	
	
}
