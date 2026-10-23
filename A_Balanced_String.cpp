#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    string s;
    cin>>s;

    int count_a = 0;
    int count_b = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'){
            count_a++;
        }else if(s[i]=='b'){
            count_b++;
        }
    }

    if(count_a==count_b){
        cout<<"YES";
    }else{
        cout<<"NO";
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