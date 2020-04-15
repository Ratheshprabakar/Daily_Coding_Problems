/*You are given an array of integers. Return the largest product that can be made by multiplying any 3 integers in the array
Input : [-4,-4,2,8]
Output : 128
Explanation : [-4,-4,2,8] should return 128 as the largest product can be made by multiplying -4 *-4 *8 = 128
*/
#include<stdio.h>
int main()
{
	int *input_array;
	int size,flag=1,sign=0,i,j,temp,positive_product,negative_product;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size * sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);
		if(input_array[i]<0)
			sign=1;
	}
	for(i=size-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if(input_array[j]<input_array[j+1])
			{
				temp=input_array[j];
				input_array[j]=input_array[j+1];
				input_array[j+1]=temp;
				flag=1;			
			}		
		}		
	}
	positive_product=input_array[0] * input_array[1]* input_array[2];
	negative_product=input_array[0]*input_array[size-2] * input_array[size-1];
	if(sign!=1)
	{
		printf("The Largest product of 3 integer in the array is %d",positive_product);
	}
	else
	{
		(positive_product>negative_product)?printf("The Largest product of 3 integer in the array is %d",positive_product):printf("The Largest product of 3 integer in the array is %d",negative_product);	
	}
	free(input_array);
	
}
