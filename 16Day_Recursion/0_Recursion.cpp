#include<bits/stdc++.h>
using namespace std;
// int cnt = 0;

// void print(){
    
//     if(cnt == 3) return;
//         cout<<cnt <<endl;
//         cnt++;
//         print();
    
// }


// int main(){
// print();
// }

// void printNums(int n){
//     //base case
//     if(n==1) {
//        cout<< "1 ";
//     return; 
//     }
//     cout<<n<< " "; // starting reucrsion using going to last to first 
//     printNums(n-1);
//     cout<<n<< " ";//back track back the recuresion who point i go their
// }

int Sum(int n){
    //base case
    if(n==1){
        // cout<<1;
        return 1;
    } 
    return n + Sum(n-1);
}
int main(){
    // printNums(9);
    cout<<Sum(4);
    return 0;
}


