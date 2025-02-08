#include <iostream>
using namespace std;

bool isPutCardOrNOt(string cards[] , string tablecard){
    for (int i = 0; i <5; i++)
    {
        string card = cards[i];
        for (int j = 0; j < card.size(); j++)
        {
            char ans = card[j];
            if (ans == tablecard[0] || ans == tablecard[1])
            {
                return true;
            }
        }
        
    }
    return false;
}
int main()
{

    string tablecard;
    cin >> tablecard;
    string cards[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }

    if (isPutCardOrNOt(cards , tablecard))
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
   
    

    return 0;
}