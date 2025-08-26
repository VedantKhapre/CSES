#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    long long mod = 1000000007;
    long long result = 1;
    
    for(long long i = 0; i < n; i++){
        result *= 2;
        result %= mod;
    }
    
    cout << result;
    
    return 0;
}