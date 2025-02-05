#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool areAlmostEqual(string s1, string s2){
        if (s1 == s2)
            return true;
        string a = s1;
        string b = s2;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a != b)
            return false;
        else{
            vector<int> v;
            for (int i = 0; i < s1.size(); i++)
                if (s2[i] != s1[i])
                    v.push_back(i);
            if (v.size() != 2)
                return false;
            else{
                swap(s2[v[0]], s2[v[1]]);
                if (s1 == s2)
                    return true;
                else
                    return false;
            }
        }
    }
};

int main()
{
    string s1 = "bank";
    string s2 = "kanb";
    Solution obj;
    int ans = obj.areAlmostEqual(s1, s2);
    if (ans == 1){
        cout << "True";
    }
    else{
        cout << "false";
    }
}