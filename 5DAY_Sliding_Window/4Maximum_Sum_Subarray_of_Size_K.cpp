#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSumSubarray(vector<int>& nums, int k) {
        int n = nums.size();

        // Step 1: Calculate the sum of the first 'k' elements
        int windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        // Initialize maxSum with the sum of the first window
        int maxSum = windowSum;

        // Step 2: Slide the window across the array
        for (int i = k; i < n; i++) {
            // Slide the window: add the new element and subtract the leftmost element
            windowSum += nums[i] - nums[i - k];

            // Update maxSum if the current window sum is greater
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << "Maximum Sum Subarray: " "ans "<< solution.maxSumSubarray(nums, k) << endl;//output is 9

    return 0;
}
