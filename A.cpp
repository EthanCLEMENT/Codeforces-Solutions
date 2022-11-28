#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);    
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        if(s1.compare(s2) < 0){
            cout << "-1" << endl;
           return 0; 
        }
        else if(s1.compare(s2) > 0){
            cout << "1" << endl;
                return 0;
        }
        else{
            cout << "0" << endl;
            return 0; 
    }
}





    
