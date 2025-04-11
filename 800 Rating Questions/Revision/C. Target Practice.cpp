#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<char>> a(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    int startRow = 0;
    int startCols = 0;
    int endRow = 9;
    int endCols = 9;

    while (startRow <= 4)
    {
        int cnt = 0;
        for (int i = startCols; i <=endCols; i++)
        {
            if (a[startRow][i] == 'X')
            {
                cnt++;
            }
        }

        for (int i = startRow + 1; i <=endRow; i++)
        {
            if (a[i][endCols] == 'X')
            {
                cnt++;
            }
        }

        for (int i = endCols - 1; i >= startCols; i--)
        {
            if (a[endRow][i] == 'X')
            {
                cnt++;
            }
        }

        for (int i = endRow - 1; i >startRow; i--)
        {
            if (a[i][startCols] == 'X')
            {
                cnt++;
            }   
        }

        sum += cnt * (startRow+1);

        startCols++;
        startRow++;
        endCols--;
        endRow--;
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}