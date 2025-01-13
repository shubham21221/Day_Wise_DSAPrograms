#include<bits/stdc++.h>
using namespace std;

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1}; // Return 1-indexed result
            } else if (sum < target) {
                left++; // Move left pointer right
            } else {
                right--; // Move right pointer left
            }
        }

        return {}; // This will never be reached (guaranteed solution).
    }
};