#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxSum = 0;
        int currentSum = 0;
        unordered_map<int, int> freqMap; // To store frequencies of elements in the window

        for (int i = 0; i < n; i++) {
            // Add the current element to the sum and frequency map
            currentSum += nums[i];
            freqMap[nums[i]]++;

            // If the window size exceeds k, shrink the window from the left
            if (i >= k) {
                currentSum -= nums[i - k];
                freqMap[nums[i - k]]--;
                if (freqMap[nums[i - k]] == 0) {
                    freqMap.erase(nums[i - k]);
                }
            }

            // If the window contains exactly k distinct elements
            if (i >= k - 1 && freqMap.size() == k) {
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 2, 4, 5, 6};
    int k = 3;

    cout << "Maximum Sum of Distinct Subarrays: " << solution.maximumSum(nums, k) << endl;

    return 0;
}
