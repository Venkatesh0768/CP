#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void slove()
{
    int x, y;
    cin >> x >> y;
    string result = "No";
    if(x+1 ==  y){
        result ="Yes";
    } 

    if (x%9 ==0 && y ==1)
    {
        result = "Yes";
    }

    cout<<result<<endl;
    
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