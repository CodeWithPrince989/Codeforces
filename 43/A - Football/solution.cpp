#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    string team1 = "", team2 = "";
    int count1 = 0, count2 = 0;
 
    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
 
        if (team1.empty()) {
            team1 = team;
            count1++;
        } else if (team == team1) {
            count1++;
        } else {
            team2 = team;
            count2++;
        }
    }
 
    if (count1 > count2) {
        cout << team1 << "
";
    } else {
        cout << team2 << "
";
    }
 
    return 0;
}