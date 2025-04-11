#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    int oddSum = 0;
    int evenSum =0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 ==0)evenSum += a[i];
        else oddSum +=a[i];
    }

    if (evenSum % 2 ==0 && oddSum %2 ==0 || evenSum % 2 ==1 && oddSum %2 ==1)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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