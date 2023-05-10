#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <numeric>

#define ll long long

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(),greater<int>());
    int sum = accumulate(v.begin(), v.end(),0);
    int curr = 0;
    for(int i = 0; i < v.size(); i++){
        if(sum >= curr){
            ans++;
            sum -= v[i];
            curr += v[i];
        }else{
            break;
        }
    }
    cout << ans << endl;
}