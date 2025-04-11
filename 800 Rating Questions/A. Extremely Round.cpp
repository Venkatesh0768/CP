#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    for (int d = 1; d <= 9; d++) {
        for (int x = d; x <= n; x = x * 10) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
