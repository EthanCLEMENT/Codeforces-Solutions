#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

    string s;
    char uppercase;
    bool check = true;
    cin >> s;
    for(int i = 1; i < s.length();i++){
        if(islower(s[i])){
            check = false;
        }
    }
    if(check == true){
        for(int i = 0; i < s.length();i++){
            if(islower(s[i])){
                uppercase = toupper(s[i]);
            }
            else{
                uppercase = tolower(s[i]);
            }
            cout << uppercase;
        }
    }
    else{
        cout << s << endl;
    }
}
