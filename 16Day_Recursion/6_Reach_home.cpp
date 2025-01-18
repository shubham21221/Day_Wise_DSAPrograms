#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
    cout<<"sorce "<<src<<" destination "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"pahuch gaya "<<endl;
        return ;
    }
    src++;
    reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src =1;

    cout<<endl;
    reachHome(src, dest);
    return 0;
}