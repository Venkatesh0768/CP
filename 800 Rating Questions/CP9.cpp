#include <iostream>
using namespace std;
#include<cmath>

int main()
{   int t; cin>>t;

    while (t>0)
    {
        int n; cin>>n;

        int arr[n];
        for (int i = 0; i < n-1; i++)
        {
           cin>>arr[i];
        }

        int sum =0;
        for (int i = 0; i < n-1; i++)
        {
            sum += arr[i];
        }
       

        if (sum <0)
        {
           sum =  abs(sum);
        }else{
            sum = sum * -1;
        }

         cout<<sum << endl;
        
        
        
        
       t--;
    }
    
 
    return 0;
}