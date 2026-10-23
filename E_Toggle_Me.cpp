#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << "\n";
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