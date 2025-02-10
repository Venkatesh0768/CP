#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void slove()
{
    long long x,y;
    cin>>x>>y;
    long long diff = x-y;
    if (diff == 1)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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