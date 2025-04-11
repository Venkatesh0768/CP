#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int diff = 1e9;
    bool sorted = true;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            diff = min(a[i] - a[i - 1], diff);
            sorted &= a[i] >= a[i - 1];
        }
    }

    if (!sorted)
    {
        cout << "0" << endl;
        return;
    }

    cout << diff / 2 + 1 << endl;
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