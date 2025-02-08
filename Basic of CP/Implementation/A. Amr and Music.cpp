#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int days;
    cin >> days;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> a1;
    for (int i = 0; i < n; i++)
    {
        a1.push_back({a[i], i + 1});
    }

    sort(a1.begin(), a1.end());


    vector<int> indices;
    int ans = days;
    for (int i = 0; i <a1.size(); i++)
    {
        if(a1[i].first <= ans ){
            indices.push_back(a1[i].second);
            ans -= a1[i].first;
        }else{
            break;
        }
    }

    cout<<indices.size()<<"\n";
    for (auto it :indices)
    {
        cout<<it<<" ";
    }
    
    

    return 0;
}