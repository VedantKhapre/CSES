#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x, y;
    cin >> n;
    
    while(n--) {
        
        cin >> y >> x;
        long long number;
        
        //diagonal
        if(x == y){
            number = x * y - (x - 1);
        }
        
        long long value = max(x, y);
        long long diagonal = value * value - (value -1);        
        
        // row > column
        if(y > x){
            if(y % 2 == 0) {
                number = diagonal - (x - y);
            } else {
                number = diagonal + (x - y);
            }
        }
        
        // row < column
        if(y < x){
            if(x % 2 == 0) {
                number = diagonal + (y - x);
            } else {
                number = diagonal - (y - x);
            }
        }
        
        cout << number << endl;
    }
    return 0;
}