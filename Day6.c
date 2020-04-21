/*Given a N by M matrix of numbers,print out the matrix in a clockwise spiral
Example given matrix is shown in input
Input:
[[1,2,3,4,5],
[6,7,8,9,10],
[11,12,13,14,15],
[16,17,18,19,20]]
Output :1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12 

*/

#include<stdio.h>
int main()
{
	int a[100][100];
	int i,k=0,l=0,m,n,j;
	printf("Enter the no of rows\t");
	scanf("%d",&m);
	printf("Enter the no of columns\t");
	scanf("%d",&n);	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	i=0;
	j=0; 
 
    while (k < m && l < n) { 
        for (i = l; i < n; ++i) { 
            printf("%d ", a[k][i]); 
        } 
        k++; 

        for (i = k; i < m; ++i) { 
            printf("%d ", a[i][n - 1]); 
        } 
        n--; 

        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                printf("%d ", a[m - 1][i]); 
            } 
            m--; 
        }

        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                printf("%d ", a[i][l]); 
            } 
            l++; 
        } 

    } 
		
}
