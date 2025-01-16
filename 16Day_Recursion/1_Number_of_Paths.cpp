
#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;

    int prev1 = 1; // Ways to reach 0th stair
    int prev2 = 1; // Ways to reach 1st stair

    for (int i = 2; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = countWays(n);
    cout << "Number of ways to reach the " << n << "'th stair: " << ways << endl;

    return 0;
}