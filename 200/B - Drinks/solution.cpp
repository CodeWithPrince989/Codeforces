#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    
    // Restriction
    if (n<1 || n>100) {
        return 0;
    }
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    double sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    
    double result = sum/n;
    cout<<result;
    return 0;
}