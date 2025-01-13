#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // Push open brackets
            } else {
                // If stack is empty or top doesn't match, it's invalid
                if (st.empty()) return false;
                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop(); // Pop the matched open bracket
            }
        }

        // If stack is empty, the string is valid
        return st.empty();
    }
};

int main() {
    Solution solution;

    string test1 = "()";
    string test2 = "([{}])";
    string test3 = "(]";
    string test4 = "([)]";

    cout << solution.isValid(test1) << endl; // Output: 1 (true)
    cout << solution.isValid(test2) << endl; // Output: 1 (true)
    cout << solution.isValid(test3) << endl; // Output: 0 (false)
    cout << solution.isValid(test4) << endl; // Output: 0 (false)

    return 0;
}
