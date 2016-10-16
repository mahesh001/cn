#include <iostream>
#include <cstring>
#include <algorithm>
#include<bits/stdc++.h>
#define REP(i,a,n) for(int i=(a);i<(n);i++)
using namespace std;
void swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}
 
void printinlexo(string &str, int n) {
	bool flag = false;
	int i = n-1;
	while(i > 0) {
		if(str[i-1] < str[i]) {
			flag = true;
			int ceil = i;
			REP(j,i,n) if(str[j] < str[ceil] && str[j] > str[i-1]) ceil = j;
			swap(str[i-1], str[ceil]);
			reverse(str.begin()+i, str.end());
			break;
		}
		i--;
	}
	if(!flag) return;
	static int x = 2;
	cout << x++ << " " <<  str << " \n";
	printinlexo(str, n);
}
 
void solve(string &str, int n) {
	sort(str.begin(), str.end());
	cout << "1 " << str << " \n";
	printinlexo(str, n);
}

int main()
{
    int t;
    char str[1000];
    char temp[1000];
    int index = 0;
    
    cin>>t;
    
    while(t--)
    {
    	cin>>str;
    	int n =strlen(str);
    	solve (str,n);
    	
    }
    return 0;
}

