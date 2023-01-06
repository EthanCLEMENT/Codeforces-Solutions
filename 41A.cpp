#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(),s2.end());
    if(s1 == s2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
