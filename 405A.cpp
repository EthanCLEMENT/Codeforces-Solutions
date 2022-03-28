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
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
}
