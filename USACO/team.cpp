#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    int cnt =0;
    while (t>0)
    {   int cnt1 =0;

        int a; cin>>a; 
        int b; cin>>b;
        int c; cin>>c; 

        if (a ==1 ) cnt1++;
        if (b ==1 ) cnt1++;
        if (c ==1 ) cnt1++;
        
        if (cnt1 >=2)
        {
           cnt++;
        }
        
        
       t--;
    }
    
    cout <<cnt<<endl;
 
    return 0;
}