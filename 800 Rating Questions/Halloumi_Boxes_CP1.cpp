#include <iostream>
using namespace std;

int isSortesd(int arr[], int n)
{
    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            flag = false;
    }

    return flag;
}
int main()

{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (k == 1)
        {
            if (isSortesd(arr, n))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }

        t--;
    }
}