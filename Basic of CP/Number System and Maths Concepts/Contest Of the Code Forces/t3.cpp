#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sortedArr(vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] > a[i])
            return false;
    }
    return true;
}

bool isdecresingornot(vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] < a[i])
            return false;
    }
    return true;
}

void slove()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b;
    for (int i = 0; i < m; i++)
        cin >> b;

    if (sortedArr(a))
    {
        cout << "YES" << endl;
    }

    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        int original = a[i];
        a[i] = b;
        if (sortedArr(a))
        {
            possible = true;
            break;
        }
        a[i] = original;
    }

    cout << (possible ? "YES" : "NO" )<<"\n";
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