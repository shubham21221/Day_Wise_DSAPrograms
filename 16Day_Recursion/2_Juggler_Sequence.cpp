class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        ans.push_back(n);
        while(true){
            long long x = ans.back();
            if(x==1){
                break;
            }
            if(x%2 == 0){
                ans.push_back(pow(x,0.5));
            }else{
                ans.push_back(pow(x,1.5));
            }
        }
        return ans;
    }
};