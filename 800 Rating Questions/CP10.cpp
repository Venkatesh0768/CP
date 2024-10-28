#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int border[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    while (t > 0)
    {

        char arr[10][10];
        int totalSum =0;
        for (char i = 0; i < 10; i++)
        {
            for (char j = 0; j < 10; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == 'X')
                {
                    totalSum += border[i][j];
                }
            }
        }

        cout<<totalSum << endl;

        t--;
    }

    return 0;
}