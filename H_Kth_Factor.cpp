#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> lower_factors;
    vector<long long> upper_factors;

    // Find all factors up to sqrt(N)
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            lower_factors.push_back(i);
            if (i * i != N) {
                upper_factors.push_back(N / i);
            }
        }
    }

    // Total number of factors
    long long total_factors = lower_factors.size() + upper_factors.size();

    if (K > total_factors) {
        cout << -1 << "\n";
    } else if (K <= lower_factors.size()) {
        // The K-th factor is in the first list
        cout << lower_factors[K - 1] << "\n";
    } else {
        // The K-th factor is in the second list (which is collected in descending order, 
        // so we access it from the end)
        long long index_from_end = K - lower_factors.size();
        cout << upper_factors[upper_factors.size() - index_from_end] << "\n";
    }

    return 0;
}