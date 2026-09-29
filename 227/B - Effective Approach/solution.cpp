#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    // Direct mapping index array (1-based index)
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        pos[val] = i;
    }
 
    int m;
    cin >> m;
 
    long long vasya = 0; // Use long long to avoid integer overflow
    long long petya = 0;
 
    for (int i = 0; i < m; ++i) {
        int q;
        cin >> q;
        int idx = pos[q];
        vasya += idx;
        petya += (n - idx + 1);
    }
 
    cout << vasya << " " << petya << "
";
 
    return 0;
}