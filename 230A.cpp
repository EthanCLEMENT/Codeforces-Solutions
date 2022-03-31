#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

   int s, n; // kirito's strength vs number of dragons
   vector <pair <int, int >> v;
   cin >> s >> n;
   for(int i = 0; i < n; i++){ // x is i-th dragon's strength and y is bonus strength
       int x, y;
       cin >> x >> y;
       v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(s <= v[i].first){
            cout << "NO" << endl;
            return 0;
        }
        else{
            s+=v[i].second;
        }
    }
    cout << "YES" << endl;
    return 0;
}
