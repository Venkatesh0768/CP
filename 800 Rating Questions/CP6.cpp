#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int  k;
        for (int i = 1; i < n ; i++)
        {
            k = (arr[i - 1] + arr[i]);
        }

        cout<< k << endl;


       

        t--;
    }

    return 0;
}