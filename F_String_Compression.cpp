
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length() && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            cout << s[i];

            if (count > 1)
                cout << count;

            count = 1;
        }
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
