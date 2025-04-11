#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            int ans = a[i];
            for (int k = i; k <= j; k++)
            {
                cout<<a[k]<<" ";
                ans %= a[k];
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}