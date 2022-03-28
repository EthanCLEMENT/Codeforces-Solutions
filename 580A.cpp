#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans = 0, tmp = 0;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < v.size();i++){
        if(v[i]<=v[i+1]){
            ans++;
        }
        else{
            ans++;
            if(tmp <= ans){
                tmp = ans;
            }
            ans = 0;
        }
    }
    if(tmp <= ans){
        tmp = ans;
    }
    cout << tmp << endl;
}
