#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void slove()
{
    string s;
    cin >> s;
    string replace_word = "us";
    string replace_by = "i";

    string ans = "";
    for (int i = 0; i < s.size() - 2; i++)
    {

        ans += s[i];
    }

    cout << ans + 'i' << endl;
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