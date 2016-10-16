#include<iostream>
using namespace std;
#define m
#define n 5
void printkmat(int a[n][n],int k){
	int i,j,p,q;
	if(k>n) return ;
	else
	for(i=0;i<n-k+1;i++)
	{
		for(j=0;j<n-k+1;j++)
		{
			int sum=0;
			for(p=i;p<k+i;p++)
				for(q=j;q<k+j;q++)
					sum+=a[p][q];
					
				
				cout<<sum<<" ";
			
			
			
		}
		cout<<"\n";
	}
}
int main()
{
    int mat[n][n] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5},
                    };
    int k = 3;
    printkmat(mat, k);
    return 0;
}
