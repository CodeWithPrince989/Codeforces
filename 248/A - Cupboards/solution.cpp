#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int l0 = 0, l1 = 0;
    int r0 = 0, r1 = 0;
 
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        
        if (l == 0) l0++;
        else l1++;
 
        if (r == 0) r0++;
        else r1++;
    }
 
    int total_time = min(l0, l1) + min(r0, r1);
    cout << total_time << endl;
 
    return 0;
}