#include<iostream>
using namespace std;
void segate(int a[],int n)
{
	int t,i,cnt=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		cnt++;
	}
	t=n-cnt;//no of 1's
	cout<<"{";
	for(i=0;i<cnt;i++)
	cout<<"0"<<" ";
	for(i=0;i<t;i++)
	cout<<"1"<<" ";
	cout<<"}";
}
int main()
{
	int b[]={0,1,0,0,1,1,1,0,1};
	int n= sizeof(b)/sizeof(b[0]);
	segate(b,n);
}
