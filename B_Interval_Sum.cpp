#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll L, R;
    cin >> L >> R;

    // Ensure L <= R just in case, though the problem guarantees it
    if (L > R) {
        swap(L, R);
    }

    // Using the arithmetic progression sum formula: O(1) time complexity
    ll count = (R - L + 1);
    ll sum = count * (L + R) / 2;

    cout << sum << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}