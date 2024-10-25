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
        string s;
        cin >> s;
        char arr[n];
        for (int i = 0; i < s.length(); i++)
        {
            arr[i] = s.at(i);
        }

        int action = 0;

        if (arr[0] == '.')
        {
            arr[0] = 'F';
            action++;
        }

        for (int i = 1; i < sizeof(arr); i++)
        {
            if (arr[i] == '.')
            {

                arr[i] = 'F';
                action++;

                if (i < sizeof(arr) - 1)
                {
                    if (arr[i - 1] == '.' || arr[i - 1] == 'F' && arr[i + 1] == '.')
                    {
                        action = 2;
                        break;
                    }
                }
            }

            if (arr[i] == '#')
            {
                continue;
            }
        }

        cout<< action << endl;

        t--;
    }

    return 0;
}