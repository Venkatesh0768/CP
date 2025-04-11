#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string a, s;
    cin >> a >> s;

    string ans =a;
    int x = 0;

    while (ans.size() < s.size())
    {
        ans.append(ans);
        x++;
    }

    size_t pos = ans.find(s);
    if (pos !=  string::npos){
        cout << x << endl;
        return;
    }

    ans.append(a);
    x++;

    pos = ans.find(s);
    if (pos !=  string::npos){
        cout << x << endl;
        return;  
    }
    
    cout<<"-1"<<endl;

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