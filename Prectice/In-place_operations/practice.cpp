// reverseing an array in-place 
// Reverse the elements of an array without creating a new array. this is called in-place

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& nums){
    int left =0;
    int right = nums.size()-1;
    while(left < right){
        swap(nums[left],nums[right]);
    left++;
    right--;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    reverseArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}


//removeDuplicates from soted Array (in-place)
