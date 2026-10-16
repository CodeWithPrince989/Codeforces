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

    vector<int> original(n);
    for (int i = 0; i < n; i++) {
        cin >> original[i];
    }

    // Create separate copies for independent simulation
    vector<int> arr_sel = original;
    vector<int> arr_ins = original;

    int swap_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int loc = i;
        int min_val = arr_sel[i];
        for (int j = i + 1; j < n; j++) {
            if (arr_sel[j] < min_val) {
                min_val = arr_sel[j];
                loc = j;
            }
        }
        if (loc != i) {
            swap_sum += 1;
            swap(arr_sel[i], arr_sel[loc]);
        }
    }

    int shifts_sum = 0;
    for (int i = 1; i < n; i++) {
        int temp = arr_ins[i];
        int j = i - 1;
        while (j >= 0 && arr_ins[j] > temp) {
            arr_ins[j + 1] = arr_ins[j];
            j--;
            shifts_sum += 1;
        }
        arr_ins[j + 1] = temp;  
    }
    

    if (shifts_sum < swap_sum) {
        cout << "Insertion Sort\n";
    } else if (swap_sum == shifts_sum) {
        cout << "Tie\n";
    } else {
        cout << "Selection Sort\n";
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