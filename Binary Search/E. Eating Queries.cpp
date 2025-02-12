#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int target)
{
    int n = arr.size();
    int l = 0;
    int r = n - 1;

    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= target)
        {
            ans = min(ans, mid);
            r= mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}
void slove(){
    int n , q;
    cin>>n>>q;

    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());
    reverse(arr.begin() , arr.end());

    //prefix sum of the arr;
    for (int i = 1; i < n; i++)
    {
        arr[i] =  arr[i-1] +arr[i];
    }

    while (q--)
    {
        int x;
        cin>>x;

        int lb = lowerBound(arr, x);
        lb = lb+1;

        if (lb>n)
        {
           cout<<"-1"<<endl;
        }else{
            cout<<lb<<endl;
        }
        
    }
    





    
}

int main()
{
    int t; cin>>t;

    while (t--)
    {
        slove();
        
    }
    
 
    return 0;
}