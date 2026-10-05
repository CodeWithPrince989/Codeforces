#include <iostream>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    long long total_time = 0;
    int current_house = 1;
 
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
 
        if (target >= current_house) {
            total_time += (target - current_house);
        } else {
            total_time += (n + target - current_house);
        }
 
        current_house = target; // Update current position
    }
 
    cout << total_time << endl;
    return 0;
}