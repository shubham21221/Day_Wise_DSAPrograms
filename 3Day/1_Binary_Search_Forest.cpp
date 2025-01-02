#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int find_height(int tree[], int n, int k) {
//         int low = 0, high = *max_element(tree, tree + n);
//         int result = -1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             long long wood = 0;

//             // Calculate total wood collected for height `mid`
//             for (int i = 0; i < n; i++) {
//                 if (tree[i] > mid) {
//                     wood += (tree[i] - mid);
//                 }
//             }

//             // Check if we collected enough wood
//             if (wood >= k) {
//                 result = mid; // Possible answer
//                 low = mid + 1; // Try for a higher height
//             } else {
//                 high = mid - 1; // Try for a lower height
//             }
//         }

//         return result;
//     }
// };
class Solution {
public:
    int find_height(int tree[], int n, int k) {
        // Step 1: Sort the tree heights
        sort(tree, tree + n);
        
        int low = 0, high = tree[n - 1];
        int result = -1;

        // Step 2: Perform binary search
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long wood = 0;

            // Calculate total wood collected for height `mid`
            for (int i = n - 1; i >= 0; i--) {
                if (tree[i] > mid) {
                    wood += (tree[i] - mid);
                } else {
                    break; // No need to check further as the array is sorted
                }
            }

            // Check if enough wood is collected
            if (wood >= k) {
                result = mid; // Possible answer
                low = mid + 1; // Try for a higher height
            } else {
                high = mid - 1; // Try for a lower height
            }
        }

        return result;
    }
};


int main() {
        int n, k;
        cin >> n; // Number of trees
        int tree[n];
        for (int i = 0; i < n; i++)
            cin >> tree[i]; // Heights of the trees
        cin >> k; // Required wood

        Solution ob;
        cout << ob.find_height(tree, n, k) << endl; // Output result

    return 0;
}
