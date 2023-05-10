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
   int n, h, ans = 0;
   cin >> n >> h;
   for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a <= h){
            ans+=1;
        }else{
            ans+=2;
        }
   }
   cout << ans << endl;
}