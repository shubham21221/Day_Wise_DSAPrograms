#include<bits/stdc++.h>
using namespace std;

//using the simple sorting technic 
// using TC = o(nlog n)
// using sc = o(1)
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         int n = nums.size();
//         //sort the all element uing sort funtion
//         sort(nums.begin(),nums.end());
//         // 1,2,3,4,5,6
//         // return the n-k th ele 
//         return nums[n-k];
//         //return is kth ele is 3 
//     }
// };


//solution using the minheap
class Solution {
public:
    int findKthLargestusingHeap(vector<int>& nums, int k) {
        //create minheap 
        int n = nums.size();
        priority_queue <int, vector<int>, greater<int> > minHeap; 
        // trvels the nums and put in  the minheap
        for(int i=0;i<n;i++){
            minHeap.push(nums[i]);
            if(minHeap.size()>k){
                minHeap.pop();
            }
    
        }
                return minHeap.top();
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    //create object using the class
    Solution ob;
    // return the function on the class 
    // cout<<"Kth largest element is : "<<ob.findKthLargest(nums,k);
    cout<<"Kth largest element is : "<<ob.findKthLargestusingHeap(nums,k);

}
