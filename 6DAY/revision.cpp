#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    int rowsize = grid.size();
    int colsize = grid[0].size();
    int n = rowsize * colsize;
    vector<int> count(n + 1, 0); // To count occurrences of each number

    // Count occurrences of each number in the grid
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colsize; j++) {
            count[grid[i][j]]++;
        }
    }

    int repeated = 0, missing = 0;
    for (int i = 1; i <= n; i++) {
        if (count[i] == 2) {
            repeated = i;
        } else if (count[i] == 0) {
            missing = i;
        }
    }

    return {repeated, missing};
}

int main() {
    vector<vector<int>> mat = {{1, 3}, {2, 2}}; // Correct initialization
    vector<int> ans = findMissingAndRepeatedValues(mat);
    cout << "Repeated: " << ans[0] << ", Missing: " << ans[1] << endl;

    return 0;
}