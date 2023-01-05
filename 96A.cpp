#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int count = 1;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(count >= 7){
            cout << "YES" << endl;
            return 0;
        }
        if(s[i]==s[i+1]){
            count++;
        }else{
            count = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
