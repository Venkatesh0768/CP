#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    string ans;

    if(n%2 ==0){
      int a = n/2;
      for (int i = 0; i < n/2 -1; i++)
      {
        ans = ans + '-';
      }
      ans = ans + "==";
      for (int i =0; i < n/2 -1; i++)
      {
        ans = ans + '-';
      } 

      cout<<ans;
      
    }else{
      for (int i = 0; i < n/2; i++)
      {
        ans = ans + '-';
      }
      ans = ans + "=";
      for (int i =0; i < n/2 ; i++)
      {
        ans = ans + '-';
      } 

      cout<<ans;
    }

    

    return 0;
}