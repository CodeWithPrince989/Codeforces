#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vi = vector<int>;

// Function to count divisors of a single number in O(sqrt(X)) time
int countDivisors(long long n) {
    int count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // i is a divisor
            if (i * i != n) {
                count++; // n / i is also a distinct divisor
            }
        }
    }
    return count;
}

void solve() {
    int n, q, k;
    if (!(cin >> n >> q >> k)) return;

    vector<long long> arr(n);
    // pref[i] will store the cumulative count of elements having exactly K divisors up to index i-1
    vector<int> pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pref[i + 1] = pref[i]; // carry forward previous count
        
        // Check if the current element has exactly k divisors
        if (countDivisors(arr[i]) == k) {
            pref[i + 1]++; // increment count if it matches
        }
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        // Range query using 1-indexed prefix sum
        int ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}