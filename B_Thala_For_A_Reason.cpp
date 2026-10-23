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

    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        n=n/10;
    }
    if(sum==7){
        cout<<"Thala for a reason"<<endl;
    }else{
       cout<<"Blocked for no reason"<<endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}