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
	int space = 1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!space){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        space=0;
	        cout<<s[i];
	    }
	}
}
