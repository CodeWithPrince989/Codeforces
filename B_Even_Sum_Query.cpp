#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;

    // Use 1-based indexing (size n + 1)
    vector<string> arr(n + 1);
    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] == 'a' || arr[i] == 'e' ||arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            pref[i] = pref[i - 1] + arr[i]; // Add if index is even
        } else {
            pref[i] = pref[i - 1];         // Carry forward if index is odd
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        long long sum = pref[r] - pref[l - 1];
        cout << sum << "\n"; // Use \n instead of endl for better performance
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t; // Note: The problem doesn't mention multiple test cases, but keep it if needed.
    while (t--) {
        solve();
    }

    return 0;
}