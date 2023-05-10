#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>

#define ll long long

using namespace std;

int main() {
   int n, t;
   string s;
   cin >> n >> t;
   for(int i = 0; i < n; i++){
        char x;
        cin >> x;
        s += x;
   }
   for(int j = 0; j < t; j++){
        for(int i = 0; i < n; i++){
            if(s[i] == 'B' && s[i + 1] == 'G'){
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
   }
    cout << s << endl;
   // BGGBG -- i = 0
   // GBGGB -- i = 1
   // GGBGB -- i = 2
}