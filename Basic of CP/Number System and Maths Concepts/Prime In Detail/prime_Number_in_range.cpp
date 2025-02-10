#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<bool> primeInRange(int n)
{
    vector<bool> Prime(n + 1, true);
    Prime[0] = false;
    Prime[1] = false;

    for (int i = 2; i * i < n; i++)
    {
        if (Prime[i] == true)
        {
            for (int j = i * i; j < n; j += i)
            {
                Prime[j] = false;
            }
        }
    }

    return Prime;
}
int main()
{
    int t;
    cin >> t;

    vector<bool> primes = primeInRange(t);

    for (int i = 0; i < primes.size(); i++)
    {
        if(primes[i]){
            cout<<i <<" Prime"<<endl;
        }else{
            cout<<i <<" Not prime"<<endl;
        }
        
    }

    return 0;
}