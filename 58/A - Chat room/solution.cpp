#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string target = "hello";
    int j = 0; // Pointer for 'target'
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++; // Move to the next target character
        }
        if (j == target.size()) {
            cout << "YES" << endl;
            return 0; // Found all characters in order
        }
    }
 
    cout << "NO" << endl;
    return 0;
}