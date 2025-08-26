#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    if(n * ( n + 1 )/ 2 % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        return 0;
    }
    
    vector<long long> first;
    vector<long long> second;
    
    if(n % 2 == 0){
        for(long long i = 0; i < n/2; i++){
            if(i % 2 == 0){
                first.push_back(i + 1);
                first.push_back(n - i);
            } else {
                second.push_back(i + 1);
                second.push_back(n - i);
            }
        }
    } else{
        for(long long i = 0; i < (n - 1)/2; i++){
            if(i % 2 == 0){
                first.push_back(i + 1);
                first.push_back(n - i - 1);
            } else {
                second.push_back(i + 1);
                second.push_back(n - i - 1);
            }
        }
        if(first.size() > second.size()){
            second.push_back(n);
        } else {
            first.push_back(n);
        }
    }
    
    cout << first.size() << endl;
    for(int i=0; i < first.size(); i++){
        cout << first[i] << " ";
    }
    cout << endl;
    
    cout << second.size() << endl;
    for(int i=0; i < second.size(); i++){
        cout << second[i] << " ";
    }
    cout << endl;
    
    return 0;
}