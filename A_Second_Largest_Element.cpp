#include <iostream>
#include <climits> // Required for INT_MIN
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize both tracking variables to the lowest possible integer value
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // The previous largest becomes the second largest
            secondLargest = largest;
            largest = arr[i];
        } 
        // If it's smaller than the largest but larger than the second largest
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // Handle edge case where no unique second largest element exists (e.g., all elements are identical)
    if (secondLargest == INT_MIN) {
        cout<<"-1";
    } else {
        cout << secondLargest << endl;
    }

    return 0;
}
