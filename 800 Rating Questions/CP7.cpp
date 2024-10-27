#include <iostream>
using namespace std;

int slove(string s, string x )
{

    for (int i = 0; i <6; i++)
    {

        if (x.find(s) != string::npos)
        {
            return i;
        }
        else
        {
            x += x;
            
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;

        string x;
        cin >> x;
        string s;
        cin >> s;

        cout<< slove(s, x ) << endl;

        t--;
    }

    return 0;
}