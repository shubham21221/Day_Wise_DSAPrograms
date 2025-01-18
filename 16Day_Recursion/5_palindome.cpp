#include<bits/stdc++.h>
using namespace std;

bool palindome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return palindome(i+1,s);
}

int main(){
    string s = "madam";
     palindome(0,s);
    if(palindome(0,s)==1){
        cout<<"True";
    }else{
        cout<<"False";
    }
}