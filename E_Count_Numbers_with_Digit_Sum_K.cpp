#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

// Function to calculate the digit sum of a number
int getDigitSum(long long x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void solve() {
    int n, q, k;
    cin >> n >> q >> k;

    vector<long long> arr(n + 1);
    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        int d_sum = getDigitSum(arr[i]);
        // Check if the digit sum equals k
        pref[i] = pref[i - 1] + (d_sum == k ? 1 : 0);
    }

    for (int i = 1; i <= q; i++) {
        int l, r;
        cin >> l >> r;
        // Answer range query in O(1) time
        int count = pref[r] - pref[l - 1];
        cout << count << "\n";
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