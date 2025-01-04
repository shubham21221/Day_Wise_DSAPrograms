#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:
    int minSubArrayLen(vector<int>& nums,int target) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minLength = INT_MAX;

        for (int right = 0; right < n; ++right) {
            sum += nums[right];

            while (sum >= target) {
                minLength = min(minLength, right - left + 1);
                sum -= nums[left];
                ++left;
            }
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};

int main(){
    Solution ob;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int ans = ob.minSubArrayLen(nums, target);
    cout<<ans<<endl;
}