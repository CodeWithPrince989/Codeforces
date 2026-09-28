#include <iostream>
 
using namespace std;
 
// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    // Find the next prime after n
    int next_prime = n + 1;
    while (!isPrime(next_prime)) {
        next_prime++;
    }
 
    // Check if m is equal to the next prime after n
    if (next_prime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}