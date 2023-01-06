#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int n, ans = 0, mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        ans += b;
        ans -= a;
        if(mx < ans){
            mx = ans;
        }
    }
    cout << mx << endl;
}
