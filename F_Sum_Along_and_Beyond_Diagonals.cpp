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

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int sumofDiagonal = 0;
    int sumofnonDiagonal = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sumofDiagonal+=arr[i][j];
            }else{
                sumofnonDiagonal+=arr[i][j];
            }
        }
    }

    cout<<sumofDiagonal<<" "<<sumofnonDiagonal;

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