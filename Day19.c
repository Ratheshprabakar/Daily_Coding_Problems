/*MS Excel column titles have the following pattern: A,B,C,....Z,AA,AB,AC,.....AZ,BA,BB,BC......BZ...etc. In other words, column 1 is named as 'A', column 2 is 'B', column 26 is 'Z',column 27 is 'AA' and so forth. Given a positive integer, find its corresponding column name
Input : 26
Output : Z
Input : 51
Output : AY
Input : 676 
Output : YZ
Input : 704
Output : AAB
*/
#include<stdio.h>
int main()
{
	int number,k,i=0;
	char alphabet_array[50];
	while(1)
	{	i=0;
		printf("\nEnter the number\t");
		scanf("%d",&number);
		while(number>0)
		{
			int remainder=number % 26;
			if(remainder==0)
			{
				alphabet_array[i]='Z';
				i++;
				number=(number/26)-1;

			}	
			else
			{
				alphabet_array[i] =(remainder-1) + 'A';
				i++;
				number=number/26;
			}		
		}
		alphabet_array[i]='\0';
		for(k=i-1;k>=0;k--)
		{
			printf("%c",alphabet_array[k]);
		}
	}	
}

