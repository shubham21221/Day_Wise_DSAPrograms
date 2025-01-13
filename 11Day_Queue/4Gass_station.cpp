#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    queue<int> q;  // Queue to simulate the traversal
    int totalGas = 0, totalCost = 0;
    int start = 0, currentGas = 0;

    // Calculate total gas and total cost
    for (int i = 0; i < n; i++) {
        totalGas += gas[i];
        totalCost += cost[i];
    }

    // If total gas is less than total cost, return -1 (impossible to complete circuit)
    if (totalGas < totalCost) {
        return -1;
    }

    // Simulate the traversal
    for (int i = 0; i < n; i++) {
        q.push(i);  // Add station index to the queue
        currentGas += gas[i] - cost[i];

        // If currentGas becomes negative, reset starting point
        if (currentGas < 0) {
            // Clear the queue and reset starting point
            while (!q.empty()) {
                q.pop();
            }
            start = i + 1;
            currentGas = 0;
        }
    }

    return start;
}

int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int result = canCompleteCircuit(gas, cost);
    cout << "Starting gas station index: " << result << endl;

    return 0;
}
