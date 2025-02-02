#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        for(int i=0;i<n;i++){
                if(nums[i]>nums[(i+1)%n]){
                    count1++;
                }
            }
            if(count1<=1){
            return true;
            }
        return false;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {3,4,5,1,2};
    int ans = obj.check(nums);
    if(ans==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
