#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;


    int cnt = 0;
    while (n > 0)
    {

        int lastdigit = n % 10;
        if (lastdigit == 4 || lastdigit == 7)
        {
            cnt++;
        }

        n = n / 10;
    }

    if (cnt == 4 || cnt == 7)
    {
        cout << "YES"<< "\n";
    }
    else
    {
        cout << "NO"<< "\n";
    }

    return 0;
}