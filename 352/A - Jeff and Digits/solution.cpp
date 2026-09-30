#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int count5 = 0, count0 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 5) count5++;
        else count0++;
    }
 
    if (count0 == 0) {
        cout << -1 << "
";
    } else if (count5 < 9) {
        cout << 0 << "
";
    } else {
        int usable5 = (count5 / 9) * 9;
        for (int i = 0; i < usable5; i++) {
            cout << 5;
        }
        for (int i = 0; i < count0; i++) {
            cout << 0;
        }
        cout << "
";
    }
 
    return 0;
}