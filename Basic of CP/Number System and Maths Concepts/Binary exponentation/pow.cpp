#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findpow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int x = findpow(a, b / 2);
    int ans = 0;
    if (b % 2 == 1)
    {
        ans = x * x * a;
    }
    else
    {
        ans = x * x;
    }

    return ans;
}

int findpowbin(int a, int b, int m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int x = findpow(a, b / 2, m);
    int ans = 0;
    if (b % 2 == 1)
    {
        ans = (x % m * x % m) % m;
        ans = (ans % m * a % m) % m;
    }
    else
    {
        ans = (x % m * x % m) % m;
    }

    return ans;
}

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int m = 27;

    int x = findpow(a, b, m);
    cout << x << endl;
    return 0;
}