#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permuatation(vector<int> a, int idx)
{
    if (idx == a.size())
    {
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        swap(a[idx], a[i]);
        permuatation(a, idx + 1);
        swap(a[idx], a[i]);
    }
}

void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    permuatation(a , 0);
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