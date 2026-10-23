#include <iostream>

using namespace std;

int main() {
    // Optimize input/output operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n <= 1) {
        cout << "NO\n";
        return 0;
    }

    bool is_prime = true;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}