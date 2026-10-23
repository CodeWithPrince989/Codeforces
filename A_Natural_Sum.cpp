#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        long long sum = (n * (n + 1)) / 2;
        cout << sum << "\n";
    }

    return 0;
}