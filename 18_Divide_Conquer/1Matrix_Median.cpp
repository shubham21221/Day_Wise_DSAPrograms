// sudo code 
// low = smallest element in matrix (first element of first row)
// high = largest element in matrix (last element of last row)
// median_pos = (r * c + 1) / 2
// while low < high:
//     mid = low + (high - low) / 2
//     count = count of elements <= mid in the matrix
//     if count < median_pos:
//         low = mid + 1
//     else:
//         high = mid
// return low

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to count the number of elements <= mid in the matrix
int countLessEqual(vector<vector<int>>& matrix, int mid) {
    int count = 0;
    int r = matrix.size(), c = matrix[0].size();
    for (int i = 0; i < r; i++) {
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}

// Function to find the median of the matrix
int findMedian(vector<vector<int>>& matrix) {
    int r = matrix.size(), c = matrix[0].size();
    int low = INT_MAX, high = INT_MIN;
    // Find the smallest and largest elements in the matrix
    for (int i = 0; i < r; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][c - 1]);
    }
    int median_pos = (r * c + 1) / 2;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(matrix, mid);
        if (count < median_pos) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << "Median: " << findMedian(matrix) << endl;
    return 0;
}