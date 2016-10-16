#include<iostream>
using namespace std;
void maxdiff(int a[],int n)
{
int i,j;
int maxdif=a[1]-a[0];
int min=a[i];
for(i=0;i<n;i++)
{ if((a[i]-min)>maxdif)
     maxdif=a[i]-min;
     if(a[i]<min)
     min=a[i];
}
cout<<maxdif;
}
int main()
{
	int b[]={2,4,10,7,8};
	int n= sizeof(b)/sizeof(b[0]);
	maxdiff(b,n);
}
