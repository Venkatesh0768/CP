#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a ,b,c,d;
    cin >> a>>b>>c>>d;

    if (a == c && b == d)
    {
       cout<<"0"<<endl;                                 
       return;
    }
    
    
    int diff = abs(b - d);
    int y= a + diff;
    int x= b + diff;
    
    int diff2 = abs(y - c);
    int z =  y - diff2;

    if (c == z &&  x == d)
    {
      cout<<diff + diff2<<endl;
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