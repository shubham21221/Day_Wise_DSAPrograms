#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // Pointer for nums1
        int j = n - 1; // Pointer for nums2
        int k = m + n - 1; // Pointer for the merged array

        // Merge nums1 and nums2 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Copy remaining elements from nums1 (if any)
        while (i >= 0) {
            nums1[k] = nums1[i];
            i--;
            k--;
        }

        // Copy remaining elements from nums2 (if any)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    // Input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 with extra space for merging
    int m = 3; // Number of initialized elements in nums1
    vector<int> nums2 = {2, 5, 6}; // nums2 to be merged into nums1
    int n = 3; // Number of elements in nums2

    // Merge the arrays
    Solution sol;
    sol.merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}