#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n, k, i, a[100], ans = 0;
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] >= a[k - 1])
            ans++;
    }
    cout << ans << endl;
}





    
