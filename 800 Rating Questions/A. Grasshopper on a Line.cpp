#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, k;
    cin >> x >> k;

    if (x % k != 0)
    {
        cout << "1" << "\n";
        cout << x << "\n";
    }
    else if (x % k == 0)
    {
        cout << "2" << "\n";
        cout << "1" << " " << x - 1 << "\n";
    }
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