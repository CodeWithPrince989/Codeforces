#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, t;
    if (!(cin >> s >> t)) return 0;
 
    // Reverse the string 's'
    reverse(s.begin(), s.end());
 
    // Compare reversed 's' with 't'
    if (s == t) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
 
    return 0;
}