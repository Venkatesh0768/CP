#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void slove()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            cout << "13\n";
            break;
        }
        else if (s[i] == '3')
        {
            cout << "31\n";
            break;
        }
    }
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