#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

tuple<vi, int> calculate_score(const vector<int>& arrangement, const vector<vi>& lines) {
    vi combined;
    for (int i : arrangement) {
        combined.insert(combined.end(), lines[i-1].begin(), lines[i-1].end());
    }
    
    int score = 0, prefix_sum = 0;
    for (int num : combined) {
        prefix_sum += num;
        score += prefix_sum;
    }
    
    return make_tuple(combined, score);
}

void process_input(int n, int m, vector<vi>& lines) {
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) perm[i] = i + 1;
    
    int max_score = 0;
    do {
        auto [combined, score] = calculate_score(perm, lines);
        max_score = max(max_score, score);
    } while (next_permutation(perm.begin(), perm.end()));
    
    cout << max_score << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vi> lines(n, vi(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> lines[i][j];
            }
        }
        
        process_input(n, m, lines);
    }
    return 0;
}
