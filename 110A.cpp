#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    ll n, ans = 0;
    cin >> n;
    string s = to_string(n);
    for(int i = 0; i < s.length();i++){
        if(s[i] == '4' || s[i] == '7'){
            ans++;
        }
    }
    if(ans == 4 || ans == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
