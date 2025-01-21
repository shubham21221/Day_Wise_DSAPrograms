// #include<bits/stdc++.h>
// using namespace std;

// int search(int arr[], int n, int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {20,5,7,25};
//     // int n = sizeof(arr)/sizeof(arr[]);
//     int x = 25;
//     cout<<search(arr,4,x)<<endl;
// }


// #include<bits/stdc++.h>

// using namespace std;
// int main(){
    
// }
// #include<bits/stdc++.h>
// using namespace std;

// int insert(int arr[], int n, int x, int cap, int pos){
//     if(n==cap)
//         return n;
//     int idx = pos -1;
//     for(int i=n-1; i>=idx;i--){
//         arr[i+1] = arr[i];

//     }
//     arr[idx] = x;
//     return n+1;
// }

// int main(){
//     int arr[5];
//     int cap = 5;
//     int n = 3;
//     arr[0] = 5;
//     arr[1] = 10;
//     arr[2] = 20;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int x = 7;
//     int pos = 2;
//     n = insert(arr, n, x, cap, pos);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int deleteEle(int arr[], int n, int x){
//     int i = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x)
//             break;
//         if(i==n)return n;
//         for(int j=i;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//         return n-1;
//     }
// }

// int main(){
//     int arr[] = {3,8,12, 5,6};
//     int x = 12;
//     int n = 5;
//     cout<<"before deleting"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     n = deleteEle(arr, n, x);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void reversearray(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }

// int main(){
//     int arr[] = {10, 5, 7, 30}, n = 4;
//        cout<<"Before Reverse"<<endl;
//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        reversearray(arr,n);
//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//        }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void lRotatedOne(int arr[], int n){
//     int temp = arr[0];
//     for(int i=0;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// int main(){
//        int arr[] = {1, 2, 3, 4, 5}, n = 5;
//        cout<<"Before Left Rotation"<<endl;
//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        lRotatedOne(arr,n);
//        for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//        }
//        cout<<"After 1 left Rotation"<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void lRotatedOne(int arr[], int n){
//     int temp = arr[0];
//     for(int i=0;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void leftRotate(int arr[], int d, int n){
//     for(int i=0;i<d;i++){
//         lRotatedOne(arr,n);
//     }
// }
// int main(){
//        int arr[] = {1, 2, 3, 4, 5}, n = 5, d=2;
//        cout<<"Before Left Rotation"<<endl;
//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        leftRotate(arr,n,d);
//        for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//        }
//        cout<<"After 1 left Rotation"<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int arr[], int low, int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }

// void leftRotate(int arr[], int d, int n){
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);
    
// }

// int main(){
//     int arr[] = {1,2,3,4,5} ,n=5, d = 4;
//     cout<<"before left rotation"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     leftRotate(arr,d,n);
//     cout<<"After left rotation"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    

// }


// #include <bits/stdc++.h>
// using namespace std;

// void reverse(int arr[], int low, int high){
    
//     // while(low<high){
//     //     swap(arr[low],arr[high]);
//     //     low++;
//     //     high--;
//     // }

//     for(int i=low;i<high-1;i++){
//         int temp = arr[low];
//         arr[low] = arr[high];
//         arr[high] = temp;
//     }
        
// }

// void leftRoteted(int arr[], int n,int d){
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);
    
// }

// int main()
// {
//       int arr[] = {1, 2, 3, 4, 5};
//       int n = 5;//length
//       int d = 4;// postion to roteded the element
//       cout<<"Before Left Rotation"<<endl;
//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//     leftRoteted(arr,n,d);
//     cout<<"after left rotation"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
      
// }

// #include<bits/stdc++.h>
// using namespace std;

// int remDups(int arr[], int n){
//    int temp[n];
//    temp[0] = arr[0];
//    int res = 1;
//    for(int i=0;i<n;i++){
//     if(temp[res-1]!=arr[i]){
//         temp[res] = arr[i];
//         res++;
//     }
//    }
//    for(int i=0;i<n;i++){
//     arr[i]=temp[i];
//    }
//    return res;


// }

// int main()
// {
//     int arr[] = {10, 20, 20, 30, 30, 30, 30}, n=7;
//     cout<<"Before Removal Duplicates: ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl<<"Size = "<<n<<endl;
//     int Res = remDups(arr,n);
//     cout<<"After removing duplicates"<<endl;
//     for(int i=0;i<Res;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Size = "<<Res<<endl;
    
// }

// #include<bits/stdc++.h>
// using namespace std;

// int remDups(int arr[], int n){
//    int res = 1;
//    for(int i=0;i<n;i++){
//     if(arr[i] != arr[res-1]){
//         arr[res] = arr[i];
//         res++;
//     }
//    }
//    return res;
// }

// int main()
// {
//     int arr[] = {10, 20, 20, 30, 30, 30, 30}, n=7;
//     cout<<"Before Removal Duplicates: ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl<<"Size = "<<n<<endl;
//     int Res = remDups(arr,n);
//     cout<<"After removing duplicates"<<endl;
//     for(int i=0;i<Res;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Size = "<<Res<<endl;
    
// }

// #include<bits/stdc++.h>
// using namespace std;

// int getLargest(int arr[], int n){
    
//     int res = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[res]){
//             res = i;
//         }
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {10, 5, 20, 8}, n=4;
//     cout<<"Index = "<<getLargest(arr, n)<<endl;
// }

#include<iostream>
using namespace std;

// int leaders(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         bool flag=false;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i] <= arr[j])
//             {
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false)
//             cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[] = {7, 10, 4, 3, 6, 5, 2}, n=7;
//     cout<<"Leasers = ";
//     leaders(arr, n);
//     cout<<endl;
// }

// int maxDiff(int arr[], int n)
// {
//     int res = arr[1] - arr[0];
//     for(int i=0; i<n; i++)
//         for(int j=i+1; j<n; j++)
//             res = max(res, arr[j]-arr[i]);
//     return res;
// }

// int main()
// {
//     int arr[] = {2, 3, 10, 6, 4, 8, 1}, n=7;
//     cout<<"Maximum Difference = "<<maxDiff(arr,n)<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int maxProfit(int price[], int start, int end){
//     if(end<=start) return 0;
//     int profit = 0;
//     for(int i=start;i<end;i++){
//         for(int j=i+1;j<end;j++){
//             if(price[j]>price[i]){
//                 int cur_profit = price[j]-price[i] + 
//                 maxProfit(price,start, i-1);
//                 maxProfit(price, j+i,end);
//             profit = max(profit, cur_profit);
//             }
//         }
//     }
//     return profit;
// }

// int main(){
//     int price[] = {1,5,3,8,12};
//     int start = 0;
//     int end = sizeof(price)/sizeof(price[0]);
//     cout<<"maximum profit in stock Market = "<<maxProfit(price,start,end);
// }

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int n){
    int profit = 0;
    for(int i =1;i<n;i++)
        if(price[i]>price[i-1])
            profit += (price[i]-price[i-1]);
        return profit;
}

int main(){
    int price[] = {1,5,3,8,12};
    // int size = sizeof(price)/sizeof(price[0]);
    int size = 5;
    cout<<maxProfit(price,size);
}

// get a roung answer in this progeam

#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n){
    int res = 0;
    for(int i=1;i<n-1;)
}

int main(){
    int arr[] = {3,0,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<getWater(arr,size);
    
}