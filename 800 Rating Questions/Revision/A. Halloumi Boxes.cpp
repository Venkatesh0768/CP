#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &ans)
{
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i-1] > ans[i ])
            return false;
    }
    return true;
}
void slove(){
    int n, k; cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    if (isSorted(a))
    {
      cout<<"YES"<<endl;
      return;   
    }else{
        if (k>=2)
        {
           cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
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