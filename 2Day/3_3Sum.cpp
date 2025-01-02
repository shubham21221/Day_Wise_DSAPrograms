#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    if (nums.size() < 3) return result;

    // Sort the array
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; ++i) {
        // Skip duplicates for the first number
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for the second and third numbers
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    for (auto triplet : result) {
        for ( auto num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}