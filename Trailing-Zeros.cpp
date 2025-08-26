#define ll long long
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    ll current = 5, answer = 0;
    
    while(current <= n) {
        answer = answer + n / current;
        current = current * 5;
    }
    cout << answer << endl;
    
    return 0;
}