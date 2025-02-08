#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                int diffi = abs(2 - i);
                int diffj = abs(2 - j);
                cout << diffi + diffj << "\n";
                break;
            }
        }
        
    }

    return 0;
}