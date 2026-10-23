#include <iostream>
#include <string>

using namespace std;

int main() {
    string time_str;
    if (cin >> time_str) {
        // time_str will be something like "11:11"
        string hh = time_str.substr(0, 2); // Gets characters at index 0 and 1
        string mm = time_str.substr(3, 2); // Gets characters at index 3 and 4

        if (hh == mm) {
            cout << "Mogambo is happy\n";
        } else {
            cout << "Mogambo is sad\n";
        }
    }
    return 0;
}