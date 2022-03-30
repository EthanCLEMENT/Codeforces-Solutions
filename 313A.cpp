#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

   int n, ans1 = n/10, ans2 = n/100*10+n%10;
   cin >> n;
   if(n >= 0){
    cout << n << endl;
   }
   else{
    cout << max(ans1,ans2) << endl;
   }
}
