#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> anagramMp;
        
        for(const string& str : strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramMp[sortedStr].push_back(str);
        }
        vector<vector<string>> result;
        for(auto& pair : anagramMp){
            result.push_back(pair.second);
        }
        return result;
    }
};

int main(){
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    Solution ob;
    vector<vector<string>> ans = ob.groupAnagrams(str);
    for(const vector<string>& group: ans){
        for(const string& s : group){
        cout<<s<<" "<<endl;
        }
    }
    return 0;
}