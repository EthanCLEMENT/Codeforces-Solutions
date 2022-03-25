#include <iostream>
using namespace std;

int main(){

 // one ride = a rubles
 // special ticket for m rides that costs b rubles
 // to buy the special ticket she needs to take the subway n times

 int n,m,a,b;
 int ans = 0;
 cin >> n >> m >> a >> b;

 if(m*a <= b){
    ans = n*a;
 }
 else{
    ans = (n/m)*b+min((n%m)*a,b);
 }
 cout << ans << endl;

}
