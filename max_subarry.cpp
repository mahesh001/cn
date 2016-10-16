#include <iostream>
using namespace std;

int main()
{
    int t;
    int size;
    int arr[1000];
    
    cin>>t;
    
    while(t--)
    {
    	cin>>size;
    	for(int i=0;i<size;i++){
    		scanf("%d",&arr[i]);
    	}
    	
    	int max_so_far = arr[0];
    	int max = arr[0];
    	
    	for(int i=1;i<size;i++){
    		if((max_so_far + arr[i]) < arr[i]){
    			max_so_far = arr[i];
    		}
    		else{
    			max_so_far += arr[i];
    		}
    		if(max < max_so_far)
    			max = max_so_far;
    	}
    	
    	cout<<max<<endl;
    }
    return 0;
}
