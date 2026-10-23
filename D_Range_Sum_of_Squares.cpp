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

    vector<long long> arr(n + 1);
    // pref[i] will store the sum of squares from index 1 to i
    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pref[i] = pref[i - 1] + arr[i] * arr[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        // Range sum of squares from L to R is pref[R] - pref[L - 1]
        long long sum = pref[r] - pref[l - 1];
        cout << sum << "\n"; // '\n' is faster than endl
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // Note: The problem statement says there is a single test case (N and Q are given directly), 
    // but keeping cin >> t just in case your template requires it. 
    // If there is no test case count in the input file, remove `cin >> t;`.
    while (t--) {
        solve();
    }

    return 0;
}