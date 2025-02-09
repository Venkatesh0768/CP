#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isVaild(int a[3]){
    sort(a ,a+3);
    return (a[0] * a[1] == a[2]);
}

int main()
{

    int a[3];
    cin>>a[0];
    cin>>a[1];
    cin>>a[2];

    if (isVaild(a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}