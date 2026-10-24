#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // Standard alternating prefix sum starting with '+' at index 0
        if (i % 2 != 0) {
            pref[i + 1] = pref[i] - arr[i];
        } else {
            pref[i + 1] = pref[i] + arr[i];
        }
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        // Get the range sum from prefix array (0-indexed: l-1 to r-1)
        long long sum = pref[r] - pref[l - 1];

        // If the query starts at an odd 1-based index (l is odd), 
        // the signs need to be flipped because the pattern must start with '+' at L.
        if (l % 2 != 0) {
            cout << sum << "\n";
        } else {
            cout << -sum << "\n";
        }
    }
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