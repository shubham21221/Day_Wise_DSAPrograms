#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int mySqrt(int x){
            return pow(x,0.5);
        }
};

int main(){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.mySqrt(n);
}