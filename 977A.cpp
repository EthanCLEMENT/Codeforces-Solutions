#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s = to_string(n);
    while(k--){
        if(s.back() == '0'){
            s.pop_back();
        }else{
            int j = stoi(s);
            j--;
            s = to_string(j);
        }
    }
    cout << s << endl;
}
