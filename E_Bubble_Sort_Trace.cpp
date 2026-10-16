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
    int key;
    cin>>key;

    int l=0;
    int r = n-1;
    bool flag = false;
    while(l<=r){
        int mid = (l+r)/2;
        if(key==arr[mid]){
            flag = true;
            break;
        }else if(key>arr[mid]){
            l = mid+1;
        }else if(key<arr[mid]){
            r = mid-1;
        }
    }
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return;
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