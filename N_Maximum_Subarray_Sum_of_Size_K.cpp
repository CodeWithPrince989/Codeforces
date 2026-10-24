#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max to a very small number to handle negative arrays correctly
    long long max_sum = -1e18; 

    // L represents the start of the window of size k
    // L can only go up to n - k so that there are still k elements remaining
    for (int L = 0; L <= n - k; L++) {
        long long sum = 0;
        int R = L + k - 1; // R is the exact end of the window of size k
        
        for (int i = L; i <= R; i++) {
            sum += arr[i];
        }
        
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    cout << max_sum << "\n";
}

main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}