#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>

#define ll long long

using namespace std;

int main() {
   int n;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> n;
            if (n == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
   
}