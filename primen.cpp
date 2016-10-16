#include <iostream>
using namespace std;

int main()
{
int n; 
int num = 1; 
int primeCount = 0; 

cout<< "Enter how many prime numbers you want. ";
cin>> n; 
cout<< 1 << '\n';

for(int j = 1; j <= n; j++)
{
    num++;//num = 2
    primeCount = 0;
    
    for(int i = 1; i <= num; i++)
    {

        if(num % i == 0)
        {
            primeCount++;
        }
    }
        if(primeCount == 2)
        {
            cout<< num << '\n';
        }
}
return 0;
}

