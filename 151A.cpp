#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

    // n -> nb of friends
    // k -> bottles
    // l -> ml
    // c-> limes
    // d-> slices of lime
    // p->grams of salt
    // toast = nl + slice of d + np

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalml = (l*k)/nl;
    int totallime = c*d;
    int salt = p/np;

    int ans = min(totallime, totalml);
    ans = min(ans,salt)/n;
    cout << ans << endl;


}
