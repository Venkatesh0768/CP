#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canFormFullHouse(int cards[]) {
    unordered_map<int, int> mp;
    for (int i = 0; i < 7; i++) {
        mp[cards[i]]++;
    }
    
    bool flag1 = false, flag2 = false;
    
    for (auto pair : mp) {
        if (pair.second >= 3) flag1 = true;
        if (pair.second >= 2) flag2 = true;
    }
    
    return flag1 && flag2;
}

int main() {
    int cards[7];
    for (int i = 0; i < 7; i++) {
        cin >> cards[i];
    }
    cout << (canFormFullHouse(cards) ? "Yes" : "No") << endl;

    return 0;
}