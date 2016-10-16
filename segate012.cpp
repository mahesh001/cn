#include<iostream>
using namespace std;
void segate(int a[],int n)
{
	int t,i,cnt=0,cnt1=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		cnt++;
		else if(a[i]==1)
		cnt1++;
	}
	t=n-cnt-cnt1;//no of 1's
	cout<<"{";
	for(i=0;i<cnt;i++)
	cout<<"0"<<" ";
	for(i=0;i<cnt1;i++)
	cout<<"1"<<" ";
	for(i=0;i<t;i++)
	cout<<"2"<<" ";
	cout<<"}";
}
int main()
{
	int b[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n= sizeof(b)/sizeof(b[0]);
	segate(b,n);
}
