#include <iostream>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
 
    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count += 1;
        }
    }
 
    cout << count << "
";
    return 0;
}