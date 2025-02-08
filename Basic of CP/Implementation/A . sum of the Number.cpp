#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while (t>0)
    {
        int n; cin>>n;
        vector<int> a = {10, 100, 1000, 10000, 100000};
        vector<int> b;
        for (int i = 0; i < a.size(); i++)
        {   
            
            if(n%a[i] != 0){
                b.push_back(n%a[i]);
            }
            n = n-n%a[i];
 
        }

        cout<<b.size()<<endl;
        for (int i = 0; i < b.size(); i++)
        {
            cout<<b[i]<<" ";
        }    
       t--;
    }
    
 
    return 0;
}