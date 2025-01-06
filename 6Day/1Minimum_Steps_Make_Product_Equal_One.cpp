#include<bits/stdc++.h>
using namespace std;

int MinStep(int a[],int n){
    int positive = 0;
    int negative = 0;
    int zero = 0;

    int step =0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            zero++;
        }
        else if(a[i]<0){
            step = step + (-1-a[i]);
        }
        else{
            positive++;
            step = step+ (a[i]-1);
        }
    }
    if(negative % 2 == 0){
        step = step + zero;
    }
    else{
        if(zero>0){
            step= step+zero;
        }else{
            step = step+2;
        }
    }
    return step;
}


int main(){
    int arr[] = {0,-2,-1,-3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MinStep(arr,n)<<" ";
}