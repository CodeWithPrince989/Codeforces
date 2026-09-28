#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    // Odd n cannot form disjoint pairs
    if (n % 2 != 0) {
        cout << -1 << "
";
        return 0;
    }
 
    // Swap adjacent numbers: (1,2) -> 2 1, (3,4) -> 4 3, ...
    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }
    cout << "
";
 
    return 0;
}