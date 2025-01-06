//Leedcode 172. Factorial Trailing Zeroes
// https://leetcode.com/problems/factorial-trailing-zeroes/

#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n){
    int count = 0;
    while(n>2){
        n = n /5;
        count = count+n;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
}