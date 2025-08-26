#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long int n;
    cin >> n;
    
    long long expSum = n * (n + 1) / 2; // sum of first natural numbers
    long long sum = 0;
    
    for(int i = 0; i < n - 1; i++){
        int number;
        cin >> number;
        sum += number;
    }
    int missingNumber = expSum - sum;
    cout << missingNumber << endl;
    return 0;
}