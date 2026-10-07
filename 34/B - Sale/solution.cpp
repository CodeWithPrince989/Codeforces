#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort array in ascending order
    sort(a.begin(), a.end());
    
    int max_money = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {
            max_money += -a[i]; // Negative ko positive karke add kar rahe hain
        } else {
            break; // Positive/Zero aate hi aage check karne ki zaroorat nahi
        }
    }
    
    cout << max_money << endl;
    return 0;
}