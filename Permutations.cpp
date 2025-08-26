#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if(n == 1){
        cout << n;
        return 0;
    }
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    long long array[n];
    
    int temp = 2;
     for(int i = 0; i < n/2; i++){
        array[i] = temp;
        temp += 2;
    }
    
    temp = 1;
    for(int i = n/2; i < n; i++){
        array[i] = temp;
        temp += 2;
    }
    
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}