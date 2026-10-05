#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        ans[p] = i; // Person 'p' received gift from person 'i'
    }
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}