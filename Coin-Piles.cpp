#define ll long long
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        if((a+b) % 3 == 0 && a <= 2 * b && b <= 2 * a){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}