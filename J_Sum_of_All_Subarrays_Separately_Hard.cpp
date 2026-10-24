#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Outer loop for the starting index L
    for(int L = 0; L < n; L++) {
        long long current_sum = 0;
        // Inner loop for the ending index R
        for(int R = L; R < n; R++) {
            current_sum += arr[R]; // Add the new element to the running sum
            cout << current_sum << "\n"; // Print using \n for fast I/O
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