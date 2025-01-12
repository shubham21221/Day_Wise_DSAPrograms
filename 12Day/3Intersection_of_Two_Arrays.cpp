// https://leetcode.com/problems/intersection-of-two-arrays/submissions/1505831567/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    bool isDuplicate = false;
                    for (int k = 0; k < ans.size(); k++) {
                        if (ans[k] == nums1[i]) {
                            isDuplicate = true; // Mark as duplicate
                            break;
                        }
                    }

                    // If not a duplicate, add to ans
                    if (!isDuplicate) {
                        ans.push_back(nums1[i]);
                    }

                    break;
                }
            }
        }
        return ans;
        // return {-1};
    }
};