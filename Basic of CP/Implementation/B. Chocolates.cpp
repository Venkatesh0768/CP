#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    long long ans =0;
    ans += a[n - 1];
    long long max = a[n - 1] -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (max == 0)
            break;
        else
        {
            ans += min<long>(a[i], max);
            max = min<long>(a[i], max) -1;
        }
    }

    cout << ans << endl;

    return 0;
}