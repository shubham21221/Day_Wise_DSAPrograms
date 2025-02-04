#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxi = sum;
        for(int i=1;i<n;i++){
            if( nums[i]>nums[i-1]){
                sum += nums[i];

            }else{
                sum = nums[i];
            }
        maxi = max(maxi,sum);
        }
        return maxi;
    }
};

int main(){
    vector<int> nums = {10,20,30,5,10,50};
    Solution obj;
    int ans = obj.maxAscendingSum(nums);
    cout<<ans;
}