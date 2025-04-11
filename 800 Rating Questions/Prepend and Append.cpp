#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        if (a[low] == '0' && a[high] == '1' || a[low] == '1' && a[high] == '0')
        {
            low++;
            high--;
        }
        else
        {
            cout << high - low + 1 << endl;
            return;
        }
    }

    cout<<"0"<<endl;
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