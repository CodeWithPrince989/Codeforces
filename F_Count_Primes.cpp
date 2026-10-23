#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    if (n < 2) {
        cout << 0 << "\n";
        return 0;
    }

    // Sieve of Eratosthenes
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    // Count how many primes exist up to n
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}