#include <bits/stdc++.h>
using namespace std;

void findRepeatingAndMissing(const vector<int>& input)
{
    // Create a copy of the input and sort it
    vector<int> sortedInput = input;
    sort(sortedInput.begin(), sortedInput.end());

    // Traverse the sorted array
    for (int i = 0; i < sortedInput.size(); i++)
    {
        // If index + 1 is not equal to the element, it means the element is repeating or missing
        if (i + 1 != sortedInput[i])
        {
            cout << "Repeating: " << sortedInput[i] << endl;
            cout << "Missing: " << i + 1 << endl;
            break;
        }
    }
}

int main()
{
    // Input
    vector<int> input{2, 1, 3, 3, 5};

    // Call the function
    findRepeatingAndMissing(input);

    return 0;
}