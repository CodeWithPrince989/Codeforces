#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c1, c2;

    // Read the string and the two characters
    cin >> s >> c1 >> c2;

    // Iterate through the string
    for (int i = 0; i < s.length(); i++) {
        // Replace if character matches c1
        if (s[i] == c1) {
            s[i] = c2;
        }
    }

    // Print the modified string
    cout << s << endl;

    return 0;
}