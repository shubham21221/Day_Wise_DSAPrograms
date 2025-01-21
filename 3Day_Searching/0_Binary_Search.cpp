#include<bits/stdc++.h>
using namespace std;

int Binary_function(vector<int> nums, int target){
    int low = 0;
    int high = nums.size();
    while(low<=high){
        int mid = (high+low)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            low = mid+1;
        }else if(nums[mid]>target){
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> a = {1,2,3,4,5,6};
    int x = 4;
    int result = Binary_function(a,x);
    if(result == -1){
        cout<<"element is not found"<<endl;
    }
    else{
        cout<<"element is present "<< result;
    }
    
}