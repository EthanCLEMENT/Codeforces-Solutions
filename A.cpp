#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        if(x == "--X" || x == "X--"){
            ans--;
        }
        else{
            ans++;
        }
    }
    cout << ans << endl;
}





    
