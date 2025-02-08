#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int k; cin>>k;
    int l; cin>>l;
    int c; cin>>c;

    int d; cin>>d;
    int p; cin>>p;
    int nl; cin>>nl;
    int np; cin>>np;

    int a1 = k *l;

    int a2 = a1/n;
    int a3 = c*d;
    int a4 = p/np;

    int ans = min({a2, a3, a4})/n;
    
    cout<<ans<<endl;
 
    return 0;
}