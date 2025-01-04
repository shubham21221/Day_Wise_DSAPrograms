#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> char_map;
    int left = 0, max_length = 0;

    for (int right = 0; right < s.size(); ++right) {
        // If the character is repeated, move the left pointer
        if (char_map.count(s[right])) {
            left = max(left, char_map[s[right]] + 1); // Skip the previous occurrence
        }

        // Update the character's last position
        char_map[s[right]] = right;

        // Update the maximum length of the substring
        max_length = max(max_length, right - left + 1);
    }

    return max_length;
}


int main(){
    string s = "abcabcbb";
    int ans = lengthOfLongestSubstring(s);
    cout<<ans<<endl;
}