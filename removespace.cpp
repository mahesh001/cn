
#include<bits/stdc++.h>
using namespace std;
 
string removeSpaces(string str)
{
    stringstream ss;
    string temp;
    ss << str;
    str = "";
 
    while (!ss.eof())
    {
        ss >> temp;
 
        str = str + temp;
    }
    return str;
}
int main()
{
    string s = "This is a test";
    cout << removeSpaces(s) << endl;
 
    s = "geeks for geeks";
    cout << removeSpaces(s) << endl;
 
    s = "geeks quiz is awsome!";
    cout << removeSpaces(s) << endl;
 
    s = "I   love     to     code";
    cout << removeSpaces(s) << endl;
 
    return 0;
}
