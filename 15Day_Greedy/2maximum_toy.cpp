// https://www.geeksforgeeks.org/problems/maximize-toys0331/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        // int n = arr.size();
        sort(arr.begin(),arr.end());
        int toy =0;
        int expendingture = 0;
        for(int i=0;i<N;i++){
            if(expendingture + arr[i]<=K){
                toy+=1;
                expendingture+=arr[i];
            }else{
                break;
            }
        }
        return toy;
    }
};

int main(){
    Solution ob;
    vector<int> nums = {1, 12, 5, 111, 200, 1000, 10};
    int N = nums.size();
    int k = 50;
    cout<<ob.toyCount(N,k,nums);
}