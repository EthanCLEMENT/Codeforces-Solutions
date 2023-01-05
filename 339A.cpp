#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    string s;
    char temp;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < s.length() - 1; j++){
            if(s[j] > s[j + 1]){
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < s.length(); i++){
        if(i == s.length() - 1){
            cout << s[i] << endl;
            return 0 ;
        }
        cout << s[i] << '+';
    }
    
}
