
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int minElement = a[0];
    ll maxElement = a[n - 1];

    if (minElement == maxElement)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << maxElement << " ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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
