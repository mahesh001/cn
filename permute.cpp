#include <iostream>
using namespace std;

void swap(char *str,int i,int j)
{
	char temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

void permute(char *str,int l,int h)
{
	if(l == h)
	{
		cout<<str<<endl;
	}
	else
	{
		for(int i=l;i<=h;i++)
		{
			swap(str,l,i);
			permute(str,l+1,h);
			swap(str,i,l);
		}
	}
}

int main()
{
	char str[] = "abc";
	int n = sizeof(str)/sizeof(str[0]);
	
	cout<<"n is : "<<n<<endl;
	
	permute(str,0,n-2);
}
