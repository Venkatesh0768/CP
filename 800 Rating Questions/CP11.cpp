#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   
       int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }

        int mini = numeric_limits<int>::max();
        for (int i = 0; i < n; i++)
        {
            int check = 0 - arr[i];
            mini = min(mini , abs(check));
        }

        if (mini > 0)
        {
            cout << mini << endl;
        }
        else
        {
            cout << mini *-1 << endl;
        }

    

    return 0;
}