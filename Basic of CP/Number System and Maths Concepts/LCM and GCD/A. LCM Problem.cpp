#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void slove(){
    long long l, r;
    cin>>l>>r;

    long long x = l;
    long long y = 2*l;

    if (y<=r)
    {
        cout<<x <<" "<<y<<endl;
    }else{
        cout<<"-1 -1"<<endl;
    }
    
}

int main()
{
    int t; cin>>t;

    while (t--)
    {
       slove ();
        
        
    }
    
 
    return 0;
}