#include <iostream>
 
using namespace std;
 
bool isLucky(int k) {
    while (k > 0) {
        int digit = k % 10;
        if (digit != 4 && digit != 7) return false;
        k /= 10;
    }
    return true;
}
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
    return 0;
}