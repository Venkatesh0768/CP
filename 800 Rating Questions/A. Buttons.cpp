#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        if (c % 2 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    else if (a < b)
    {

        cout << "Second" << endl;
    }
    else if (a > b)
    {

        cout << "First" << endl;
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