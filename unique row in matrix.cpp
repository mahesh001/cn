 #include<iostream>
using namespace std;

const int M = 4, N = 5;
int mat[M][N] = {
	{0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 1, 0, 0}
    };

void find_unique_rows()
{
	int i,j,idx;
	int hash[123] = {-1};
	for(i=0;i<M;i++)
	{
		int str=0;
		for(j=0;j<N;j++)
			str = str*10 + mat[i][j];
		idx = str%123;
		if(hash[idx] != 1)
		{
			hash[idx] = 1;
			for(j=0;j<N;j++)
				cout<<mat[i][j]<<",";
			cout<<"		row= "<<i<<endl;
		}
	}
}

int main()
{
	find_unique_rows();
        return 0;
}
