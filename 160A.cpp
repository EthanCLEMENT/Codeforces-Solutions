#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    int sum = accumulate(v.begin(), v.end(),0);
    for(int j = 0; j < v.size() + 1; j++){
        if(ans > sum/2){
            cout << j << endl;
            break;
        }
        else{
            ans+=v[j];
            // cout << ans << endl;
        }
    }



}
