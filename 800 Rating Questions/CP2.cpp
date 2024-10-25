#include <iostream>
using namespace std;
#include<cmath>

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
            cin >>arr[i];
        }

        int m = -1;
        for (int i = 1; i < n; i++)
        {
            m = max(m, arr[i] - arr[i - 1]);
        }

        m = max(m, 2 * (k - arr[n - 1]));
        m = max(m, arr[0]);

        cout<<m << endl;
        t--;
    }

    return 0;
}