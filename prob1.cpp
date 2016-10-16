#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#define MAX 1000
using namespace std;
vector<vector<int> > arr;
vector<string> vec;
int x[MAX] = {0};

void character_rec(int n, int m){
    if (m == 1){
        x[m - 1] = n;
        int j = 0;
        while (x[j] != 0){
            j++;
        }
        vector<int> t;
        for (int  i = j - 1; i >= 0; i--){
            t.push_back(x[i]);
        }
        arr.push_back(t);
    }
    else{
        x[m - 1] = n;
        for (int j = n - 1; j >= m - 1; j--){
            character_rec(j, m - 1);
        }
    }
}

void character_rec1(vector<vector<string> > &str,int K){
    for(int i = 0; i < arr.size(); i++){
        vector<string> str_tmp;
        for (int j = 0; j < K; j++){
            string tmp;
            for (int m = 0; m < arr[0].size(); m++){
                tmp += vec[j][arr[i][m]-1];
            }
            str_tmp.push_back(tmp);
        }
        str.push_back(str_tmp);
    }
}

bool character_check(vector<vector<string> > &str){
    for (int i = 0; i < str.size();i++){
        int f = -1;
        vector<string> tmp(str[i]);
        for (int j = 0; j<str[0].size();j++){
            for (int k = 0;k < str[0].size(); k++){
                if (k==j){
                    continue;
                }
                else
                {
                    f = (tmp[j]).compare(tmp[k]);
                }               
                if (f == 0)
                    break;
            }
        }
        if (f == -1)
            return true;
    }
    return false;
}

int main(){
    int N, M, K;
    cin >> N >> M >> K;  //input 2 3 2
     while (K--){
        string str;
        for (int i = 0; i<N; i++){
            string s;
            cin >> s;
            str += s;
        }
        vec.push_back(str);  
    }
    
    int i;
    for (i=1; i <= N*M; i++){
        arr.clear();
        for (int j = N*M; j >= i;j--){
            character_rec(j, i);
        }

        vector<vector<string> > str;
        character_rec1(str,vec.size());
        if (character_check(str))
            break;  
    }
    cout << i ;
    cout<<endl;
    return 0;
}
