#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    // int n = nums.size();
    int low =0;
    int mid =0;
    int high = nums.size()-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++; low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if (nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums= {2,0,2,1,1,0};
    cout<<"Original Array";
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<endl;

    sortColors(nums);

    cout<<"Sorted array";
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
