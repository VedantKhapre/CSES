#include <utility>
#include <vector>
#define ll long long
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void hanoi(vector<pair<int, int>> &moves,int disk,int source, int destination, int auxilary){
    if(disk == 1){
        moves.push_back({source, destination});
        return;
    }
    hanoi(moves, disk - 1, source, auxilary, destination); // n -1 disk from source to auxilary using destination
    moves.push_back({source, destination}); // move source to destination
    hanoi(moves, disk - 1, auxilary,destination, source); // n -1 disk from aux to destination using source
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> moves;
    
    hanoi(moves, n, 1, 3, 2);
    
    cout << moves.size() << endl;
    for(ll i = 0; i < moves.size(); i++) {
        cout << moves[i].first << " " << moves[i].second << endl;
    }
    
    return 0;
}