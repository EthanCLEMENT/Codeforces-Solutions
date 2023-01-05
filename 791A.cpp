#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans << endl;
}
