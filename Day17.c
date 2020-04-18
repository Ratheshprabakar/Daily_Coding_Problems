/*Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return 
[-1,-1]
Input: [5,7,7,8,8,10], target = 8
Output : [3,4]
Input : [5,7,7,8,8,10], target = 6
Output :[-1,-1]
*/
#include<stdio.h>
int main()
{	
	int *input_array;
	int size,i,target,start_index=999,end_index=999,j,flag=0;
	printf("Enter the size of the sorted array\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size*sizeof(int));
	printf("Enter the elements of the sorted array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);		
	}
	printf("Enter the target\t");
	scanf("%d",&target);
	for(i=0;i<size;i++)
	{
		if(input_array[i]==target)
		{
			start_index=i;
			for(j=start_index+1;j<size;j++)
			{

				if(input_array[j]==target)
				{
					end_index=j;		
				}
				else
					break;			
			}
			if(end_index==999)
			{
				end_index=start_index;
				printf("[%d,%d]",start_index,end_index);			
			}
			else
				printf("[%d,%d]",start_index,end_index);
		flag=1;		
		}
		if(flag==1)
		{
			break;	
		}	
	}
	if(start_index==999)
	{
		printf("[-1,-1]");		
	}
	free(input_array);
}
