#include <iostream>
using namespace std;

//border arr print

void sprial(char arr[10][10] , int n , int m){
    for (char i = 0; i <10; i++)
    {
        cout<<arr[0][i] << " ";
    }


    cout<<"\n";

    for (int i = 1; n>i; i--)
    {
        cout<<arr[n][m-1] << " ";
    }
    
    
}

int main()
{
    int t; cin>>t;

    while (t>0)
    {   
        int n; cin>>n;
        int m; cin>>m;

        char arr[n][m];
        for(char i =0;i<n; i++){
            for (char j = 0; j<m; j++)
            {
                cin>>arr[i][j];
            }
            
        }

        sprial(arr, n, m);        
        
       t--;
    }
    
 
    return 0;
}