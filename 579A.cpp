#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

    long long n, ans = 0;
    cin >> n;
    while(n/2!=0){
        if(n%2==1){
            ans++;
        }
        n=n/2;
    }
    cout << ans+1;

}
