#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            int y = ch - '0';
            int inverted = 9 - y;
            ans += (min(inverted, y) + '0');
        }

        if (ans[0] == '0') ans[0] = '9';

        cout <<ans<< "\n";

    return 0;
}