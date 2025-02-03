#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1; // A single element is trivially a valid subarray

        int incCount = 1, decCount = 1, maxi = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) { // Strictly increasing
                incCount++;
                decCount = 1; // Reset decreasing counter
            } 
            else if(nums[i] < nums[i-1]) { // Strictly decreasing
                decCount++;
                incCount = 1; // Reset increasing counter
            } 
            else { // Neither increasing nor decreasing
                incCount = 1;
                decCount = 1;
            }

            maxi = max(maxi, max(incCount, decCount));
        }

        return maxi;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 3, 5, 4, 2, 6, 7};  
    cout << obj.longestMonotonicSubarray(nums);  // Output: 3
}
