// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     if (n > 3)
//     {
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (a[i - 1] + a[i] != a[i] + a[i + 1])
//             {
//                 cout << "No" << endl;
//                 return;
//             }
//         }
//     }

//     cout << "Yes" << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

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

    unordered_map<int, int> mp;
    bool yes = true;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp.size() > 2)
        {
            yes = false;
            break;
        }
    }

    if (mp.size() == 2)
    {
        int f1 = begin(mp)->second;
        if (f1 != n / 2 && f1 != (n + 1) / 2)
        {
            yes = false;
        }
    }

    if (yes)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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