#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> coins(n);
    int total_sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total_sum += coins[i];
    }
 
    // Sort in descending order to greedily pick the largest coins first
    sort(coins.rbegin(), coins.rend());
 
    int my_sum = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        my_sum += coins[i];
        count++;
        // Stop as soon as your total strictly exceeds the remaining coins' total
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
 
    cout << count << "
";
    return 0;
}