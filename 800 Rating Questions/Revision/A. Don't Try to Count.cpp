// x string n
// s string m
//  lowercase latin letter
//  any number of operation can apply to string
//  1. you append the current value of x to end of the string x;
//  Note -> x will change after this

// for eg;

// ab+ab+ ab
// ababa

// aba+ a = abaa
// ababa

// abb + abb +abb = abbabbabb
// babba

// loop s.size() ,cnt opeation ,

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int cnt = 0;
    while (x.size() < s.size())
    {
        x += x;
        cnt++;
    }

    if (x.find(s) != string::npos)
    {
        cout << cnt << endl;
        return;
    }

    if (x.find(s) != string::npos)
    {
        cout << cnt << endl;
        return;
    }
    x +=x;
    cnt++;

    if (x.find(s) != string::npos)
    {
        cout << cnt << endl;
        return;
    }else{

            cout<<"-1"<<endl;
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