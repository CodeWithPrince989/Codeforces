#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
// Function to calculate sum of squares of digits
long long get_next(long long x) {
    long long sum = 0;
    while (x > 0) {
        long long d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}
 
// Get the value after M steps (e.g., M = 200)
long long get_value_after_steps(long long x, int steps = 200) {
    for (int i = 0; i < steps; ++i) {
        x = get_next(x);
    }
    return x;
}
 
void solve() {
    int n;
    cin >> n;
    
    unordered_map<long long, long long> freq;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        long long final_val = get_value_after_steps(a);
        freq[final_val]++;
    }
    
    long long ans = 0;
    for (auto const& [val, count] : freq) {
        ans += count * (count - 1) / 2;
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}