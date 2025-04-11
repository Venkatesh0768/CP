#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void slove()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, abs(a[i - 1] - a[i]));
    }

    ans = max(ans, abs(k - a[n - 1]) * 2);
    ans =  max(ans , a[0]);

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        slove();
    }

    return 0;
}