#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Change L and R to run from 0 to n - 1
    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            for (int i = L; i <= R; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}