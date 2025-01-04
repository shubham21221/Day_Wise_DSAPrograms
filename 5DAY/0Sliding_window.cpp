#include<bits/stdc++.h>
using namespace std;

// 2.1 Maximum Sum of Subarray of Size K

// - **Problem**: Find the maximum sum of any subarray of size `k`.
// - **Approach**:
//     1. Calculate the sum of the first `k` elements.
//     2. Slide the window by subtracting the leftmost element and adding the next element.
//     3. Track the maximum sum.

int maxSumSubarray(int arr[], int n, int k) {
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int miniSumSubarray(int arr[], int n,int k){

    if (k > n) {
        return -1; // Edge case: window size larger than array size
    }
    int windowSum = 0;
    // Calculate the initial window sum
    for(int i = 0;i<k;i++){
        windowSum += arr[i];//store the window sum
    }
    
    int minSum = windowSum;
    for(int i=k;i<n;i++){
        windowSum += arr[i] - arr[i-k];
        minSum = min(minSum,windowSum);
    }
    return minSum;
}

int main(){
    // int n = 6;
    int arr[] = {1,-4,5,-1-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    int ans= maxSumSubarray(arr, n, k);
    cout<<ans<<endl;

    int ans2 = miniSumSubarray(arr, n, k);
    cout<<ans2<<endl;
}