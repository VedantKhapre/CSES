#define ll long long
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    for(ll i = 0; i < (1 << n); i++ ){
        ll grayCode = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--) {
            cout << ((grayCode >> j) & 1); 
        }
        cout << endl;
    }   
    return 0;
}