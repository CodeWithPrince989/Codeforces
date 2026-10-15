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
    string s1;
    cin >> s1;
 
    if (s == s1) {
        cout << "Equal";
    } else if (s < s1) {
        cout << "A";
    } else {
        cout << "B";
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