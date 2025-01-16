#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    //base case
    if(n==0) return 0;
    return n + sum(n-1);
}

int main(){
    int n = 3;
    cout<<sum(n);
}