
 
#include <stdio.h>
#define R 3
#define C 6
 
void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 

 
    while (k < m && l < n)
    {
       
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[0][i]);//first row
        }
        k++;
 
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);//last column
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}
 
/* Driver program to test above functions */
int main()
{
    int a[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };
 
    spiralPrint(R, C, a);
    return 0;
}
