#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt =0;
    for (int i = 0; i< n-1; i++)
    {
        // cnt +=  (!((a[i] ^a[i+1]) & 1));
        if (a[i]%2 == a[i+1]%2){
            cnt++;
        }
    }
    
    cout << cnt << "\n";
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