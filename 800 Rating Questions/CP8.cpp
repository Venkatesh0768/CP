#include <iostream>
#include <algorithm>
using namespace std;

// void binarySearch(int arr[] , int k , int n) {
//     int start=0;
//         int end = n-1;
//         while(start<=end){
//             int mid = (start+end)/2;

//             if(arr[mid] == k){
//                 cout<<"YES" << endl;
//                 return;
//             }
//             else if(arr[mid] < k){
//                 start = mid+1;
//             }else{
//                 end = mid -1;
//             }
//         }
//     cout<<"NO" << endl;

// }

int main()
{
    int t; cin>>t;
    

    while (t>0)
    {
        int n; cin>>n;
        int k; cin>>k;
        int arr[n];
        bool flag =false;

        for (int i = 0; i < n; i++)

        {
            cin>>arr[i];
           if(arr[i] == k){
             flag = true;
           }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
             
       t--;
    }
    
 
    return 0;
}