
#include<bits/stdc++.h>
  
int max(int a, int b);
int lis( int arr[], int n )
{
   int list[n],p[n];
   int i,j,max=0,maxInd=0;
   for(i=0;i<n;++i){
   
   list[i]=1;
   p[i]=-1;
}
   for(i=1;i<n;++i){
   	for(j=0;j<i;++j)
   	{
   		if(arr[i]>arr[j]&& list[i]<list[j]+1)
   		list[i]=list[j]+1;
   		p[i]=j;
  
		
	   }
	   
   
   }
   for(i=0;i<n;i++)
   {
   	if(max<list[i])
   	  max=list[i];
   	  maxInd=i;
   	  while( true )
	{
	printf("%d",arr[maxInd]);
		maxInd = p[maxInd];
		if( maxInd == -1 )
			break;
	}
   }
 
   return max;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int i,b[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n", lis( arr, n ) );
    
    return 0;
}
