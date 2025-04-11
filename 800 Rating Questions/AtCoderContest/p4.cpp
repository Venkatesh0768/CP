#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    
    while (t--) {
        cin >> n >> k;
        vector<int> A(n), B(n);
        
        for (int &a : A) cin >> a;
        for (int &b : B) cin >> b;

        int s_min = 0, E;
        vector<int> deltas;

        for (int i = 0; i < n; i++) {
            int d1 = min(abs(A[i] - B[i]), 9 - abs(A[i] - B[i]));
            int d2 = max(abs(A[i] - B[i]), 9 - abs(A[i] - B[i]));
            s_min += d1;
            if (d1 != d2) deltas.push_back(d2 - d1);
        }

        E = k - s_min;
        if (E < 0) {
            cout << "No\n";
            continue;
        }

        if (E % 2 == 0 || (!deltas.empty() && *min_element(deltas.begin(), deltas.end()) <= E)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}