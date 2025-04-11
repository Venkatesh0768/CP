#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cout<<n+1-x<<' ';
    }
    cout<<'\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}