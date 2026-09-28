#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    string result = "";
    
    for(int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        
        // Check if the character is a vowel (including 'y' as per typical problem rules)
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue; // Skip vowels
        } else {
            result += '.';
            result += c; // Add a dot followed by the lowercase consonant
        }
    }
    
    cout << result << endl;
    return 0;
}