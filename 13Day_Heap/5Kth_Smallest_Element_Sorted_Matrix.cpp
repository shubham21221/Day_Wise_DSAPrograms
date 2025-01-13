#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         int sizemat = matrix.size();
//         int sizeclo = matrix[0].size();
//         vector<int> ans ;
//         for(int i=0;i<sizemat;i++){
//             for(int j=0;j<sizeclo;j++){
//                 ans.push_back(matrix[i][j]);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans[k-1];
//     }
// };


// this code for the 
// g++ -std=c++17 only

// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         int n = matrix.size();
//         priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;

//         // Push the first element of each row into the heap
//         for (int i = 0; i < n; i++) {
//             pq.emplace(matrix[i][0], i, 0);
//         }

//         // Extract min k times
//         for (int i = 0; i < k - 1; i++) {
//             auto [val, row, col] = pq.top();
//             pq.pop();

//             // Push the next element in the same row into the heap
//             if (col + 1 < n) {
//                 pq.emplace(matrix[row][col + 1], row, col + 1);
//             }
//         }

//         // Return the k-th smallest element
//         return get<0>(pq.top());
//     }
// };

// int main() {
//     Solution sol;

//     // Example 1
//     vector<vector<int>> matrix1 = {
//         {1, 5, 9},
//         {10, 11, 13},
//         {12, 13, 15}
//     };
//     int k1 = 8;
//     cout << "The " << k1 << "th smallest element is: " << sol.kthSmallest(matrix1, k1) << endl;

//     // Example 2
//     vector<vector<int>> matrix2 = {
//         {1, 2},
//         {1, 3}
//     };
//     int k2 = 3;
//     cout << "The " << k2 << "rd smallest element is: " << sol.kthSmallest(matrix2, k2) << endl;

//     return 0;
// }

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        using Element = tuple<int, int, int>; // Tuple to store (value, row, col)
        priority_queue<Element, vector<Element>, greater<Element>> pq;

        // Push the first element of each row into the heap
        for (int i = 0; i < n; i++) {
            pq.emplace(matrix[i][0], i, 0);
        }

        // Extract min k times
        for (int i = 0; i < k - 1; i++) {
            Element top = pq.top();
            pq.pop();

            int val = get<0>(top);
            int row = get<1>(top);
            int col = get<2>(top);

            // Push the next element in the same row into the heap
            if (col + 1 < n) {
                pq.emplace(matrix[row][col + 1], row, col + 1);
            }
        }

        // Return the k-th smallest element
        return get<0>(pq.top());
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<vector<int>> matrix1 = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k1 = 8;
    cout << "The " << k1 << "th smallest element is: " << sol.kthSmallest(matrix1, k1) << endl;

    return 0;
}
