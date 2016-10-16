#include <iostream>
using namespace std;

bool funUtil(int arr[],int n,int sum,int result[],int &index,int s)
{
	if(sum == 0)
		return true;
	
	if(n == 0)
		return false;
	
	result[index++] = s;
	
	if(funUtil(arr+1,n-1,sum-arr[0],result,index,s+1) == true)
	{
		return true;
	}
	index--;
	
	if(funUtil(arr+1,n-1,sum,result,index,s+1) == true)
	{
		return true;
	}
	
	return false;
}

void fun(int arr[],int n)
{	
	int sum = 0;
	
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	
	if(sum%2 != 0)
		cout<<"Not possible\n";
	else{
		int *result = new int[n];
		int index = 0;
		bool flag = funUtil(arr,n,sum/2,result,index,0);
		
		if(flag == false)
		{
			cout<<"Not possible\n";
			return;
		}
		
		cout<<"Set 1 : ";
		for(int i=0;i<index;i++){
			cout<<arr[result[i]]<<" ";
			arr[result[i]] = -arr[result[i]];
		}
		
		cout<<"Set 2 : ";
		for(int i=0;i<n;i++){
			if(arr[i] > 0)
				cout<<arr[i]<<" ";
		}
	}
	
}

int main()
{
	int arr[] = {1,5,3,3,6,2,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	fun(arr,n);
}
