// https://leetcode.com/problems/top-k-frequent-elements/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap; // To store the frequency of each element
        // Count the frequency of each number
        for (int num : nums) {
            freqMap[num]++;
        }
        // Max-Heap to store elements by frequency
        priority_queue<pair<int, int>> pq;
        for (auto& entry : freqMap) {
            pq.push({entry.second, entry.first}); // frequency, element
        }
        vector<int> ans;
        while (k > 0 && !pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 2, 3};
    int k = 2;

    Solution ob;
    vector<int> result = ob.topKFrequent(nums, k); // Store the result

    // Print the result vector
    for (auto x : result) {
        cout << x << " ";
    }

    return 0;
}
