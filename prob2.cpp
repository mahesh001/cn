
#include<iostream>
#include <algorithm>

long long prefix[100005];
long long suffix[100005];
long long arr[100005];
using namespace std;

long long max_value(long long a[100005], int m, int n){
    long long res = 0;
    for (int i = m; i <= n; i++){
        res = max(res, a[i]);
    }
    return res;
}

int main(){
    int N;
    cin >> N;
    int i = 1;
    for (int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    prefix[0] = prefix[N + 1] = suffix[0] = suffix[N + 1] = 0;
    for (int i = 1; i<N; i++){
        prefix[i] = prefix[i - 1] ^ arr[i];
    }
    for (int i = N; i >= 1; i--){
        suffix[i] = suffix[i + 1] ^ arr[i];
    }
    long long count = 0;
    for (int i = 1; i <= N; i++){
        count = max(count, max(max_value(prefix, 0, i), max_value(suffix, i + 1, N)));

    }
    cout << count << endl;
    return 0;
}
