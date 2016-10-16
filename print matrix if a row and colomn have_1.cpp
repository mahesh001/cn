#include<iostream>
#define r 3
#define c 4
using namespace std;
int mat(bool m[r][c])
{
	int i,j;
	bool a[r],b[c];
	for(i=0;i<r;i++){
	
	a[i]=0;
}
	for(j=0;j<c;j++){
	
	b[j]=0;
}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(m[i][j]==1)
			a[i]=1;
			b[j]=1;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		if(a[i]==1||b[j]==1)
		{
		
		m[i][j]==1;
	}
	}

}
void printMatrix(bool mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    bool ma[r][c] = { {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
    };
 
    printf("Input Matrix \n");
    printMatrix(ma);
 
    mat(ma);
 
    printf("Matrix after modification \n");
    printMatrix(ma);
 
    return 0;
}
