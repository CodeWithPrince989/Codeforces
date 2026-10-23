#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    // Optimize standard input/output streams for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    // pref[i] will store the number of vowels in s[0...i-1]
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + (isVowel(s[i]) ? 1 : 0);
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        // Answer query in O(1) time
        int ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}