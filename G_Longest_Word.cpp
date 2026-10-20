#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    string s;
    getline(cin, s); // Read the entire line including spaces

    int max_len = 0;
    int current_len = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 0; // Reset length for the next word
        }
    }
    // Check for the last word (since there might not be a trailing space)
    max_len = max(max_len, current_len);

    cout << max_len << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}