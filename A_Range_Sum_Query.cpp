#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;

    vector<long long> arr(n);
    vector<long long> pref(n+1);

    for(int i=0; i<n; i++){
        cin>>arr[i];
        pref[i+1] = pref[i] + arr[i];
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int l, r;
        cin>>l>>r;
        long long sum = pref[r] - pref[l-1];
        cout<<sum<<endl; 
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