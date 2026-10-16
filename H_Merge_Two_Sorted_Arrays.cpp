#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int m, n;
    cin >> m >> n;

    vector<int> a(m);
    vector<int> b(n);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(m + n);
    int i = 0, j = 0, p = 0;

    // Merge while both arrays have elements remaining
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[p++] = a[i++];
        } else {
            c[p++] = b[j++];
        }
    }

    // Copy any remaining elements from array a
    while (i < m) {
        c[p++] = a[i++];
    }

    // Copy any remaining elements from array b
    while (j < n) {
        c[p++] = b[j++];
    }

    // Print the merged array
    for (int k = 0; k < m + n; k++) {
        cout << c[k] << (k == m + n - 1 ? "" : " ");
    }
    cout << "\n";
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