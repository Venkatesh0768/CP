#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin>>N;
    int M; cin>>M;
    vector<int> a(M);
    for (int i = 0; i < M; i++)
    {
        cin>>a[i];
    }
    
    unordered_map<int, int> mp;
    for (int i = 0; i <a.size(); i++)
    {
        mp[a[i]]++;
    }
    vector<int> a1;
    for (int i = 1; i <=N; i++)
    {
        if(mp.count(i)){
            continue;
        }else{
            a1.push_back(i);
        }
    }

    cout<<a1.size()<<endl;
    for (int i = 0; i < a1.size(); i++)
    {
        cout<<a1[i]<<" ";
    }
    


 
    return 0;
}