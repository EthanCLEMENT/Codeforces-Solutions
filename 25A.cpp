#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <locale>

using namespace std;

int main(){

    int n,j=0,b=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            j++;
        }
        else{
            b++;
        }
    }
    if(j>b){
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
}
