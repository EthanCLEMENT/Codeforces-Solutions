#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    set<char>ans;
    for(int i = 0; i < s.length(); i++){
        ans.insert(s[i]);
    }
    if(ans.size() % 2 != 0){
        cout << "IGNORE HIM!" << endl;
        return 0;
    }else{
        cout << "CHAT WITH HER!" << endl;
        return 0;
    }
}
