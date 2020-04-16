/*You are given an array of intervals- that is, an array of tuples(start,end).
The array may not be sorted, and could contain overlapping intervals. Return another array where the overlapping intervals are merged.
Input:[(1.3),(5,8),(4,10),(20,25)]
Output:[(1,3),(4,10),(20,25)]
Explanation : This input should return [(1,3),(4,10),(20,25)] since (5,8) and (4,10) can  be merged into (4,10)
Input : [(1,3),(4,10),(5,8),(6,9)]
Output : [(1,3),(4,10)]
Explanation : This input should return [(1,3),(4,10)] since (5,8) and (6,9) overlapping (4,10) so that it can be merged into (4,10)
*/
#include<stdio.h>
struct input_array
{
	int start,end;
};
int main()
{	
	int n,i,flag=1,j,k=0;
	printf("Enter number of tuples\t");
	scanf("%d",&n);
	struct input_array s[n],temp_structure[n],result_array[n];
	struct input_array temp;
	struct input_array temp1={999,999};
//Code for input
	for(i=0;i<n;i++)
	{
		scanf("%d\t%d",&s[i].start,&s[i].end);	
	}
//Printing the tuples
	printf("The input tuples are:\n[");
	for(i=0;i<n;i++)
	{

		printf("(%d,%d),",s[i].start,s[i].end);

	}
	printf("]\n");
//Sort by start

	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if (s[j].start > s[j + 1].start)
            		{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
				flag=1;
            		} 		
		}	
	}
//Copying structure to another
	memcpy(&temp_structure, &s, sizeof(s));
//Sort by end
	flag=1;
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if (temp_structure[j].end > temp_structure[j + 1].end)
            		{
				temp = temp_structure[j];
				temp_structure[j] = temp_structure[j + 1];
				temp_structure[j + 1] = temp;
				flag=1;
            		} 		
		}	
	}
//Printing two sorted structures
	printf("\nThe sorted structure by start is :\n[");
	for(i=0;i<n;i++)
		{

			printf("(%d,%d),",s[i].start,s[i].end);

		}
		printf("]\n");
	printf("\nThe sorted structure by end is:\n[");
	for(i=0;i<n;i++)
		{

			printf("(%d,%d),",temp_structure[i].start,temp_structure[i].end);

		}

		printf("]\n");
//Finding Nonoverlapping tuples
	for(i=0;i<n;i++)
	{
		if((s[i].start==temp_structure[i].start) && (s[i].end==temp_structure[i].end))
		{
			result_array[k]=s[i];
			k++;	
		}
		else
		{
			if(temp1.start>s[i].start)
				temp1=s[i];	
		}
	}
//Printing result
	printf("\nThe Final Resultant Non overlapping tuples are\n[");
	for(j=0;j<k;j++)
	{
		printf("(%d,%d),",result_array[j].start,result_array[j].end);	
	}
	if(temp1.start!=999 && temp1.end!=999)
		printf("(%d,%d)]",temp1.start,temp1.end);
	else
		printf("]");
}

