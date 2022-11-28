#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j].length() > 10)
        {
                cout << v[j][0] << v[j].size() - 2 << v[j][v[j].length()-1] << endl;
        }
        else
        {
            cout << v[j] << endl;
        }
    }
    return 0;
}
