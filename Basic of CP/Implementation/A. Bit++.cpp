#include <iostream>
using namespace std;

bool checkStatement(string statement)
{
    if (statement == "X++" || statement== "++X")return true;
    else return false;
}

int main()
{
    int n; cin>>n;
    
    int x =0;
    for (int i = 0; i < n; i++)
    {
        string statement; cin>>statement;
        if (checkStatement(statement))
        {
            x++;
        }else{
            x--;
        }
        
    }

    cout<<x<<"\n";
    
    return 0;
}