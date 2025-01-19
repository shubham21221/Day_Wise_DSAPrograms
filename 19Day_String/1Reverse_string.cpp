#include<bits/stdc++.h>
using namespace std;

// Function to reverse a string
string reverseString(string str) {
    int low = 0;
    int high = str.length();
    while(low<high){
        swap(str[low], str[high ]);
    low++;
    high--;
    }
    
    return str;
}

int main() {
    string s = "Hello, World!";
    cout << "Original String: " << s << endl;
    
    string reversed = reverseString(s);
    cout << "Reversed String: " << reversed << endl;
    
    return 0;
}