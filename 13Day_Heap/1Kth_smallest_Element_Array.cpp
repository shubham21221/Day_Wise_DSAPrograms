#include<bits/stdc++.h>
using namespace std;

//using the simple sorting technic 
// using TC = o(nlog n)
// using sc = o(1)
class Solution {
public:
    int findKthsmallest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> maxHeap;
        for(int i=0;i<n;i++){
            maxHeap.push(nums[i]);
            if(maxHeap.size()>k){
                maxHeap.pop();
                return maxHeap.top();
            }
        }
    }
};
// class Solution {
// public:
//     int findKthsmallest(vector<int>& nums, int k) {
//         int n = nums.size();
//         //sort the all element uing sort funtion
//         sort(nums.begin(),nums.end());
//         // 1,2,3,4,5,6
//         return nums[k-1];
//         // return the value of kth smallest is 3;
//     }
// };

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int k = 3;
    //create object using the class
    Solution ob;
    // return the function on the class 
    cout<<"Kth largest element is : "<<ob.findKthsmallest(nums,k);

}
