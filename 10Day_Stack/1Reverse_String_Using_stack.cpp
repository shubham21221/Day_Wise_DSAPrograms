// 344. Reverse String
// https://leetcode.com/problems/reverse-string/description/
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int n = s.size();
//         int start= 0;
//         int end=s.size()-1;
//         while(start<=end){
//             swap(s[start],s[end]);
//             start++;
//             end--;
//         }
//     }
// };

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;

        // Push all characters onto the stack
        for (char c : s) {
            st.push(c);
        }

        // Pop characters from the stack and overwrite the vector
        for (int i = 0; i < s.size(); i++) {
            s[i] = st.top();
            st.pop();
        }
    }
};

int main(){
    vector<char> s ={'h','e','l','o'};
    Solution ob;
    ob.reverseString(s);
    for(auto x : s){
        cout<<x<<" ";
    }

}
