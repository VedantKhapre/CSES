#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long int n;
    cin >> n;
    long int array[n];
    
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    long int moves = 0;
    
    for(int i = 1; i < n; i++) {
        if(array[i] <= array[i - 1]){
            moves += array[i - 1] - array[i];
            array[i] = array[i - 1];
        }
    }
    
    cout << moves;
    
    
    return 0;
}