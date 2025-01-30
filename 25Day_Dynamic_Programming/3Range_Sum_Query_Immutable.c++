
#include<bits/stdc++.h>
using namespace std;

class NumArray {
    private:
    vector<int> arr;
public:
    NumArray(vector<int>& nums) {
       int sum = 0;
       for(auto &it : nums){
        sum +=it;
        arr.push_back(sum);
       } 
    }
    
    int sumRange(int left, int right) {
       int r = arr[right];
       int l = 0;
       if(left != 0)
       l = arr[left-1];
       int ans = r-l;
       return ans; 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */