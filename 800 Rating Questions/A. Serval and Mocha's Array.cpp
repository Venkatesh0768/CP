#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "Yes" : "No") << endl;
    }

    return 0;
}
