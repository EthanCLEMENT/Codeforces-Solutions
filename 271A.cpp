#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    n++;
    while(true){
        int d1 = n % 10;
        int d2 = ( n / 10 ) % 10;
        int d3 = ( n / 100 ) % 10;
        int d4 = ( n / 1000 ) % 10;
        if( d1 != d2 && d1 != d3 && d2 != d3 && d4 != d1 && d2 != d4 && d3 != d4) {
            cout << n << endl;
            return 0;
        }else{
            n++;
        }
    }
}
