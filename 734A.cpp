#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int n, d = 0, a = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        char s;
        cin >> s;
        if(s == 'D'){
            d++;
        }else{
            a++;
        }
    }
    if(d > a){
        cout << "Danik" << endl;
    }
    else if(d < a){
        cout << "Anton" << endl;
    }else{
        cout << "Friendship" << endl;
    }
}
