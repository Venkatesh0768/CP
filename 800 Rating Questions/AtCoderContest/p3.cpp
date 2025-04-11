#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >>n;
    vector<ll> ans(n);
    unordered_map<ll , int> mp;
    for (ll i = 0; i < n; i++)
    {
        cin>>ans[i];
        mp[ans[i]]++;
    }

    ll greatestValue = 0;
    for(const auto &pair : mp){
        if(pair.second == 1){
            greatestValue =  max(pair.first , greatestValue);
        }
    }

    for(ll i = 0; i < n; i++){
        if(ans[i] == greatestValue){
            cout<<i+1<<endl;
            break;
        }
    }

    cout<<"-1"<<endl;
    return 0;
}


