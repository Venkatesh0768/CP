#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long negative_number = 0;
    long long positive_number = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x == -1)
        {
            negative_number++;
        }
        if (x == 1)
            positive_number++;
    }

    long long  operation =0;
    while (positive_number < negative_number || negative_number%2 ==  1)
    {
        operation++;
        positive_number++;
        negative_number--;
    }

    cout<<operation<<endl;
    
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