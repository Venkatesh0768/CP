#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    int flag = 1; 
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            flag ==1;
            break;
        }
    }

    if (flag)
    {
        cout<<"1"<<endl;
    }else{
        cout<<n<<endl;
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
