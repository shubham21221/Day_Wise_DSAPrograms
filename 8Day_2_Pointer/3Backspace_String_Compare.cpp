#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack_s, stack_t;

        for (char c : s) {
            if (c == '#') {
                if (!stack_s.empty()) stack_s.pop();
            } else {
                stack_s.push(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!stack_t.empty()) stack_t.pop();
            } else {
                stack_t.push(c);
            }
        }

        return stack_s == stack_t;
    }
};

int main(){
   string s = "ab##", t = "c#d#";
   int ans = backspaceCompare(s,t);
   cout<<
}