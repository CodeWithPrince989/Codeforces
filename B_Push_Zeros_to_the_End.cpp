#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Two-pointer approach jo bilkul safe aur fast hai
    int insertPos = 0; // Non-zero element ko rakhne ki jagah
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[insertPos++] = arr[i];
        }
    }

    // Baaki bache hue positions par 0 bhar do
    while(insertPos < n) {
        arr[insertPos++] = 0;
    }

    for(int k = 0; k < n; k++){
        cout << arr[k];
        if(k < n - 1){
            cout << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}