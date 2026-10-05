#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string n;
    cin >> n;
 
    // Must start with '1'
    if (n[0] != '1') {
        cout << "NO
";
        return 0;
    }
 
    for (int i = 0; i < n.size(); i++) {
        // Can only contain digits '1' and '4'
        if (n[i] != '1' && n[i] != '4') {
            cout << "NO
";
            return 0;
        }
 
        // Cannot have "444" (three consecutive 4s)
        if (i >= 2 && n[i] == '4' && n[i - 1] == '4' && n[i - 2] == '4') {
            cout << "NO
";
            return 0;
        }
    }
 
    cout << "YES
";
    return 0;
}