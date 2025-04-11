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

    int cnt = 0;
    int maxCnt = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            cnt++;
            maxCnt = max(cnt, maxCnt);
        }
        else
        {
            cnt = 0;
        }
    }

    cout << maxCnt << endl;
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
