
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    if (n == 0) {
        cout << '\n';
        return;
    }

    k %= n;
    rotate(arr.begin(), arr.begin() + k, arr.end());

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
