#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr , int target){
    int n = arr.size();
    int l =0;
    int r = n-1;

    while (l<=r)
    {
        int mid = (l +r)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] <  target){
            l = mid+1;
        }else{
            r = mid -1;
        }
    }

    return -1;
    
}

int main()
{
    vector<int> a = {1,2,4,5};
    int index = binarySearch(a , 5);
    cout<<index<<endl;
    return 0;
}