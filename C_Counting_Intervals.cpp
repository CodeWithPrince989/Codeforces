#include <iostream>

using namespace std;

void solve() {
    long long t, l, r;
    cin >> t >> l >> r;

    if (l > r) {
        cout << 0 << "\n";
        return;
    }

    long long ans = 0;
    if (t == 1) {
        ans = (r - l - 1 >= 0) ? (r - l - 1) : 0;
    } else if (t == 2) {
        ans = r - l;
    } else if (t == 3) {
        ans = r - l;
    } else if (t == 4) {
        ans = r - l + 1;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }

    return 0;
}