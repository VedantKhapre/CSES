#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int long long n;
        cin >> n;
        
        while(n != 1) {
            if(n <= 0){
                break;
            }
            cout << n << " ";
            if(n % 2 == 0) {
                n/=2;
            } else {
                n = 3 * n +1;
            }
        }
        cout << "1"<< endl;
    return 0;
}