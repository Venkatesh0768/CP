#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

   int min_element1 =INFINITY;
   for (int  i = 0; i < t; i++)
   {
     int min1 = abs(0 - a[i]);
     min_element1 = min(min1 , min_element1);
   }

   

    cout << min_element1 << endl;

    return 0;
}