#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findpow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int x = findpow(a, b / 2);
    int ans = 0;
    if (b % 2 == 1)
    {
        ans = x * x * a;
    }
    else
    {
        ans = x * x;
    }

    return ans;
}


int main()
{
    
    long long n ,m;
    cin>>n>>m;

    if (n>30)
    {
        cout<<m<<endl;
    }else{
        int x = findpow(2,n);
        cout<<m%x<<endl;
    }
    
 
    return 0;
}