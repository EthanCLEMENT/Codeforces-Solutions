#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    int n, t, k, w;
	ll ans = 0;
	cin>> k>>n>>w;
	for(int i=1; i<=w; i++){
		ans = ans+(i*k);
	}
	if(ans<= n){
		cout <<0<<"\n";
	}
	else cout << ans - n << "\n";

	return 0;
}
