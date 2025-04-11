#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans = ans ^ a[i];
    }

    if (ans == 0)
    {
        cout << "0" << endl;
        return;
    }

    for (int i = 0; i <=255; i++)
    {

        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            int b = a[j] ^i;
            ans ^= b;
        }

        if (ans == 0)
        {
            cout << i << endl;
            return;
        }
    }

    cout<<"-1"<<endl;
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