#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int m, n;
    cin>>m>>n;

    int num = 1;
    char c = 'a';
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(num>9){
                num=0;
            }
            if(c>'z'){
                c='a';
            }
            if(i%2==0 && j%2!=0){
                cout<<num;
                num+=1;
            }else if(i%2!=0 && j%2==0){
                cout<<c;
                c+=1;
            }
        }
        cout<<endl;
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