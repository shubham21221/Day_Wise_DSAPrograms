#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t){
    char result = 0;
    for (char c : s) result ^= c;
    for (char c : t) result ^= c;
    
    return result;
}

int main(){
    string s = "abcd";
    string t = "abcde";

    char ans = findTheDifference(s, t);
    cout << ans;
    return 0;
}