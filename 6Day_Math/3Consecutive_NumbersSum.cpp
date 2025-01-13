#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        for (int k = 1; k * (k - 1) / 2 < n; ++k) {
            int remainder = n - k * (k - 1) / 2;
            if (remainder > 0 && remainder % k == 0) {
                count++;
            }
        }
        return count;
    }
};

int main(){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.consecutiveNumbersSum(n);
}