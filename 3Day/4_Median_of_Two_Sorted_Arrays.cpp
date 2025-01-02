
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size(); // Size of nums1
        int n = nums2.size(); // Size of nums2
        int left = 0, right = m; // Binary search range for nums1
        
        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;
            
            // Find the maximum element on the left side of nums1
            int maxLeft1;
            if (partition1 == 0) {
                maxLeft1 = INT_MIN;
            } else {
                maxLeft1 = nums1[partition1 - 1];
            }
            
            // Find the minimum element on the right side of nums1
            int minRight1;
            if (partition1 == m) {
                minRight1 = INT_MAX;
            } else {
                minRight1 = nums1[partition1];
            }
            
            // Find the maximum element on the left side of nums2
            int maxLeft2;
            if (partition2 == 0) {
                maxLeft2 = INT_MIN;
            } else {
                maxLeft2 = nums2[partition2 - 1];
            }
            
            // Find the minimum element on the right side of nums2
            int minRight2;
            if (partition2 == n) {
                minRight2 = INT_MAX;
            } else {
                minRight2 = nums2[partition2];
            }
            
            // Check if the partition is correct
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
                else {
                    return max(maxLeft1, maxLeft2);
                }
            }
            else if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            }
            else {
                left = partition1 + 1;
            }
        }
        return 0.0;
    }
};


int main() {
    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << sol.findMedianSortedArrays(nums1, nums2) << endl; // Output: 2.0

    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << sol.findMedianSortedArrays(nums1, nums2) << endl; // Output: 2.5

    return 0;
}
