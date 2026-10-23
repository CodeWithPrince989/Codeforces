#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n[] = {3, 2, 7, 4, 1};

    vector<int> pref(6, 0);
    for(int i=0; i<5; i++){
        pref[i+1] = pref[i] + n[i];
    }

    int l=1;
    int r=3;
    for(int i=0; i<5; i++){
        cout<<pref[r+1] - pref[l];
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