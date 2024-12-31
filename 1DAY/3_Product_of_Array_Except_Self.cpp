#include <bits/stdc++.h>
using namespace std;

// vector<int> productExceptSelf(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);

//     // Nested loops to calculate the product except self
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j)
//             {
//                 ans[i] *= nums[j];
//             }
//         }
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    // Calculate prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    // Calculate postfix product and multiply
    int postfix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= postfix;
        postfix *= nums[i];
    }

    return ans;
}
int main()
{
    vector<int> nums{1, 2, 3, 4};
    vector<int> output = productExceptSelf(nums);

    for (int val : output)
    {
        cout << val << " ";
    }

    return 0;
}