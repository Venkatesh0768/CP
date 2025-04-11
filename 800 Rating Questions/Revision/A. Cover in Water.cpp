#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == '.')
        {
            cnt++;
            ans++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt > 2)
        {
            cout << "2" << endl;
            return;
        }
    }

    cout << ans << endl;
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