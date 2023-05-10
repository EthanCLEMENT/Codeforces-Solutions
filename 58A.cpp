#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>

#define ll long long

using namespace std;

int main() {
   string s, hello="hello";;
   cin >> s;
    int j=0, characters = 0;
    for(int i=0; i<s.length();i++){
        if(s[i]==hello[j]){
            j++;
            characters++;
        }
    }
    if(characters==5){
        std::cout<<"YES";
    }else{
        std::cout<<"NO";
    }
}