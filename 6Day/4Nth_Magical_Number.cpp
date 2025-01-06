#include <bits/stdc++.h>
using namespace std;

// Function to find LCM of two numbers
long long lcm(long long a, long long b) {
    return a * b / __gcd(a, b);
}

// Function to find the nth magical number
int nthMagicalNumber(int n, int a, int b) {
    const int MOD = 1e9 + 7;

    // Binary search on the result
    long long low = min(a, b), high = (long long) n * min(a, b);
    
    while (low < high) {
        long long mid = low + (high - low) / 2;
        
        // Count the number of magical numbers <= mid
        long long count = mid / a + mid / b - mid / lcm(a, b);
        
        if (count >= n) {
            high = mid;  // We need to search in the lower half
        } else {
            low = mid + 1;  // We need to search in the upper half
        }
    }
    
    return low % MOD;
}

int main() {
    int n = 5, a = 2, b = 3;
    cout << nthMagicalNumber(n, a, b) << endl;  // Example usage
    return 0;
}
