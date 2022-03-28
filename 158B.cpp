#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    // 4 per taxis
    int n, ans = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;
        v.push_back(s);
    }
    int ones = count(v.begin(), v.end(), 1);
    int twos = count(v.begin(), v.end(), 2);
    int threes = count(v.begin(), v.end(), 3);
    int fours = count(v.begin(), v.end(), 4);

    if(threes == ones){
        ans = ones + ceil(twos/2.0)+fours;
    }
    else if(threes < ones){
        ans = ceil((ones-threes+2*twos)/4.0) + threes + fours; // 2 3 4 4 2 1 3 1 : 2 - 2 + 4 = 1 +2 + 2 = 5
    }
    else{
        ans = ones+(threes-ones)+ ceil(twos/2.0)+fours;
    }
    cout << ans << endl;
}
