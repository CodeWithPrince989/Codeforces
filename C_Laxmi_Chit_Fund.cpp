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

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Total
    int total = 0;
    int max = 0;
    int min = INT_MAX;
    int avg = 0;
    for(int i=0; i<n; i++){
        total+=arr[i];
        if(max<arr[i]){
            max=arr[i];
        }

        if(min>arr[i]){
            min = arr[i];
        }
    }

    avg = total/n;

    cout<<total<<" "<<max<<" "<<min<<" "<<avg<<endl;
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