#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    queue<int> rev(queue<int> q) {
        stack<int> s;

        // Step 1: Transfer elements from the queue to the stack
        while (!q.empty()) {
            int element = q.front();
            q.pop();
            s.push(element);
        }

        // Step 2: Transfer elements from the stack back to the queue
        while (!s.empty()) {
            int element = s.top();
            s.pop();
            q.push(element);
        }

        // Return the reversed queue
        return q;
    }
};

int main() {
    Solution sol;

    // Create a queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Reverse the queue
    queue<int> reversedQueue = sol.rev(q);

    // Display the reversed queue
    cout << "Reversed Queue: ";
    while (!reversedQueue.empty()) {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }
    cout << endl;

    return 0;
}