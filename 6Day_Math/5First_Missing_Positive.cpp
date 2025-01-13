#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();

    // Place each number in its correct position
    for (int i = 0; i < n; ++i)
    {
        while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
        {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Find the first missing positive
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }

    // If all numbers are in the correct position
    return n + 1;
}

int main()
{
    vector<int> num = {1, 2, 0}; // Example input array
    int result = firstMissingPositive(num); // Function call
    cout << "The first missing positive is: " << result << endl; // Output result
    return 0;
}
