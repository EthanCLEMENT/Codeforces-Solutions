#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int upper = 0, lower = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper > lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
        return 0;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
        return 0;
    }
}
