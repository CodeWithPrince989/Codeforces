#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
 
void solve() {
    int n;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        int shifts = 0;
 
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }
        arr[j + 1] = temp;
 
        cout << "Pass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << (k == n - 1 ? "" : " ");
        }
        
        // Added the required space before the comma here
        cout << " , "; 
        
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
            if (k == i) {
                cout << "| ";
            }
        }
        cout << ", shifts = " << shifts << "\n";
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