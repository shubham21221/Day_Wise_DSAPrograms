#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                count += productCount[product] * 8; // Each previous occurrence forms 8 new tuples
                productCount[product]++;
            }
        }
        return count;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {1,2,4,5,10};
    int ans = obj.tupleSameProduct(nums);
    cout<<ans;
}