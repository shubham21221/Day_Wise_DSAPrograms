#include <bits/stdc++.h>
using namespace std;

/**
 * Accepts two arrays of equal size
 * Arrival - array with arrival times of trains
 * Departure - array with departing times of trains
 * Returns the minimum number of platforms required
 */
int minimum_platforms(vector<int> &Arrival, vector<int> &Departure) {
    // Sort both arrival and departure arrays
    sort(Arrival.begin(), Arrival.end());
    sort(Departure.begin(), Departure.end());

    int platforms = 0; // Number of platforms needed at the moment
    int max_platforms = 0; // Maximum platforms needed at any time

    int i = 0, j = 0; // Pointers for arrival and departure arrays

    // Traverse through both arrays
    while (i < Arrival.size() && j < Departure.size()) {
        if (Arrival[i] <= Departure[j]) {
            // A train is arriving, so we need one more platform
            platforms++;
            i++;
            // Update the maximum platforms needed
            max_platforms = max(max_platforms, platforms);
        } else {
            // A train is departing, so we can free up one platform
            platforms--;
            j++;
        }
    }

    return max_platforms;
}

// Driver code
int main() {
    // Arrays for schedules of the trains
    vector<int> Arrival{900, 1000, 940, 1330, 1530};
    vector<int> Departure{950, 1400, 1010, 1420, 1730};

    cout << "The minimum number of platforms needed are " << minimum_platforms(Arrival, Departure) << endl;

    return 0;
}
