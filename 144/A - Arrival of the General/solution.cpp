#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int max_idx = 0;
    int min_idx = 0;
 
    // First loop: Find the index of the first occurrence of the maximum element
    for (int i = 0; i < n; i++) {
        bool is_max = true;
        for (int j = 0; j < n; j++) {
            // If another element is strictly strictly greater, arr[i] isn't max
            if (arr[j] > arr[i]) {
                is_max = false;
                break;
            }
        }
        if (is_max) {
            max_idx = i;
            break; // Stop at the FIRST maximum element
        }
    }
 
    // Second loop: Find the index of the last occurrence of the minimum element
    for (int i = n - 1; i >= 0; i--) {
        bool is_min = true;
        for (int j = 0; j < n; j++) {
            // If another element is strictly smaller, arr[i] isn't min
            if (arr[j] < arr[i]) {
                is_min = false;
                break;
            }
        }
        if (is_min) {
            min_idx = i;
            break; // Stop at the LAST minimum element
        }
    }
 
    // Swaps needed to move max to index 0 and min to index (n - 1)
    int moves = max_idx + (n - 1 - min_idx);
 
    // Overlap correction: If max is to the right of min, 
    // moving max left shifts min one position to the right.
    if (max_idx > min_idx) {
        moves--;
    }
 
    cout << moves << "
";
 
    return 0;
}