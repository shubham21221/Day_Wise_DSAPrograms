#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int, vector<int>> mp;

        // Store all diagonals in the hashmap
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mp[i - j].push_back(mat[i][j]);
            }
        }

        // Sort each diagonal
        for (auto& it : mp) {
            sort(it.second.begin(), it.second.end());
        }

        // Place sorted values back into the matrix
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                mat[i][j] = mp[i - j].back();
                mp[i - j].pop_back();
            }
        }

        return mat;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> mat = {
        {3, 3, 1, 1},
        {2, 2, 1, 2},
        {1, 1, 1, 2}
    };

    cout << "Original Matrix:\n";
    for (const auto& row : mat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    mat = solution.diagonalSort(mat);

    cout << "\nSorted Matrix:\n";
    for (const auto& row : mat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
