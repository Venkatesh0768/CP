#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1; cin>>x1;
    int x2; cin>>x2;
    int x3; cin>>x3;

    int maxdistance = max({x1, x2, x3});
    int mindistance = min({x1, x2, x3});
    cout<<maxdistance - mindistance <<endl;
 
    return 0;
}