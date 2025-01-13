#include<bits/stdc++.h>
using namespace std;

//using the simple sorting technic 
// using TC = o(nlog n)
// using sc = o(1)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        //sort the all element uing sort funtion
        sort(nums.begin(),nums.end());
        // 1,2,3,4,5,6
        // return the n-k th ele 
        return nums[n-k];
        //return is kth ele is 3 
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    //create object using the class
    Solution ob;
    // return the function on the class 
    cout<<"Kth largest element is : "<<ob.findKthLargest(nums,k);

}
