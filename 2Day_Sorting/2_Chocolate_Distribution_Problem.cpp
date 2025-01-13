#include<bits/stdc++.h>
using namespace std;

int chocolateDistribution(vector<int>& nums, int m){
    sort(nums.begin(),nums.end());
    int min_diff = INT_MAX;

    for(int i=0;i<nums.size()-m;i++){
        int diff = nums[i+m-1] - nums[i];
        min_diff = min(min_diff,diff);
    }
    return min_diff;
}
int main(){
    vector<int> arr = {3,4,1,9,56,7,9,12};
    int m = 5;
    int result = chocolateDistribution(arr,m);
    cout<<result;
    return 0;
}