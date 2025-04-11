// team and vika 
//  rules 
//  1. shw wirtte down a1;
//  2.write downa  a ai 2 to m  such that a(i-1) <= a(i)

// try to guess a seq of a 
// note not more than exceed then input sizeof 


// 5
// 1 7 9 5 7 





// 6
// 1 7 9 3 5 7


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if (i && a.back() > x)
        {
            a.push_back(1);
        }
        a.push_back(x);
        
    }

    cout<<a.size()<<endl;
    for(int el : a){
        cout<<el<<" ";
    }
    cout<<"\n";
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