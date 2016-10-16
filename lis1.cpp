
#include<bits/stdc++.h>
  
int max(int a, int b);
int lis( int arr[], int n )
{
  int i,j;
  int maxind=0,max=0;
  int lcs[n],p[n];
  for(i=0; i <n; ++i)
	{
		lcs[i]=1;  p[i] = -1;
	}
	
	for(i=1; i<n; i++ )
	{
		for(j = i-1; j>=0; j-- )
		{
			if( (arr[j] < arr[i] ) && (lcs[i] < (lcs[j] + 1)))
			{
				lcs[i] = lcs[j]+1;
				p[i]  = j;
				if( lcs[maxind] < lcs[i] )
					maxind = i;
			}
		}
	}
	i = maxind;
	do
	{
		printf("%d\n",arr[i]);
		i = p[i];		
	}while(i!=-1);
   return max;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int i,b;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n", lis( arr, n ) );
    
    return 0;
}
