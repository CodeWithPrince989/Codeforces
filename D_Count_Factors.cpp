#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // i is a divisor
            if (i * i != n) {
                count++; // N / i is a distinct divisor
            }
        }
    }

    cout << count << "\n";

    return 0;
}