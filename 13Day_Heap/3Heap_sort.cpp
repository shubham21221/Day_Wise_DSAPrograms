#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;//left child
    int right = 2 * i + 2;// right child
    //if left child exist and is greater than root
    if(left< n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right<n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
    }

}
void Heapsort(int arr[], int n){
    int index = n;
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,1);
    }
    while(n!=1){
        swap(arr[0],arr[index]);
        index--;
        n--;
        heapify(arr,n,1);
    }
}

int main(){
    int arr [] = {2,5,4,1,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Heapsort(arr,n);
    cout<<"sorted array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;
    return 0;
}