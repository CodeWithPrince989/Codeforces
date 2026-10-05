#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> home(n), guest(n);
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }
 
    int count = 0;
    // Check every match where team i plays at home against guest team j
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == guest[j]) {
                count++;
            }
        }
    }
 
    cout << count << "
";
    return 0;
}