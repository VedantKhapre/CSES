#define ll long long
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    ll freq[26] = {};
    for(ll i = 0; i < str.size(); i++){
        freq[str[i]- 'A'] += 1; 
    }
    
    ll oddFreq = 0;
    for(ll i = 0; i < 26; i++){
        if(freq[i] % 2 != 0){
            oddFreq += 1;
        }
    }
    
    if(oddFreq > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    char middleChar = '\0';
    string half = "";
    for(ll i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0){
            middleChar = 'A' + i;
        } 
        for(ll j = 0; j < freq[i] / 2; j++){
            half += 'A' + i;
        }
    }

    string palindrome;
    palindrome += half;
    if(middleChar != '\0'){
        palindrome += middleChar;
    }
    
    for (int i = half.size() - 1; i >= 0; i--) {
        palindrome += half[i];
    }
    
    cout << palindrome;
    return 0;
}