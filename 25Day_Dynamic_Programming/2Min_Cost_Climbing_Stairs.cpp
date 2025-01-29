#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& cost, int n,vector<int>& dp){
        //base case for 0
        if(n==0) return cost[0];
        //base case for 1
        if(n==1) return cost[1];
        //add stap 3
        if(dp[n] != -1) return dp[n];
        // stap2
        dp[n] = cost[n] + min(solve(cost,n-1,dp), solve(cost,n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // stap1
        vector<int> dp(n+1, -1);
        int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;


    }
};

int main(){
    vector<int> nums = {10,15,20};
    Solution obj;
    int ans = obj.minCostClimbingStairs(nums);
    cout<<ans;
    
}