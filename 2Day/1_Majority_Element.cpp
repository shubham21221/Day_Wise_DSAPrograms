#include <bits/stdc++.h>
using namespace std;

int magorityElement(vector<int> &nums){
    int ans = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        ans = nums[n / 2];
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 2, 2, 2, 3, 1};

    int ans = magorityElement(nums);
    cout << ans;
}