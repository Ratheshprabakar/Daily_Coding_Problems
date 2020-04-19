/*You are given an array representing the heights of neighboring buildings on a city street, from east to west. The city assessor would like you to write an algorithm that returns how many of these buildings have a view of the setting sun, in order to properly value the street.

For example, given the array[3,7,8,3,6,1], you should return 3, since the top floors of the  buildings with heights 8,6 and 1 all have an unobstructed view to the west.

Can you do this using just one forward pass through the array?

*/
#include<stdio.h>
int main()
{
	int *input_array;
	int len,i,max=0,count=0;
	printf("Enter number of houses\t");
	scanf("%d",&len);
	input_array=(int *)malloc(len*sizeof(int));
	printf("Enter the heights of buildings\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&input_array[i]);
	}
	for(i=len-1;i>=0;i--)
	{
		if(input_array[i]>max)
		{
			max=input_array[i];
			count++;
		}	
	}
	printf("Number of Houses have an unobstructed view of the setting sun:\t%d",count);
	free(input_array);
	
}
