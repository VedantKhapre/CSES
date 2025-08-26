#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin >> n;
    
    int repetition = 1;
    int maxLength = 1;
    
    for(int i = 0; i < n.length(); i++){
        if(n[i] == n[i + 1] && (n[i] == 'A' || n[i] == 'C' || n[i] == 'G' || n[i] == 'T')){
            repetition += 1;
        } else {
            if(repetition > maxLength) {
                maxLength = repetition;
            }
            repetition = 1;
        }
    }
    
    if(repetition > maxLength) {
        maxLength = repetition;
    }
    cout << maxLength << endl;
    return 0;
}