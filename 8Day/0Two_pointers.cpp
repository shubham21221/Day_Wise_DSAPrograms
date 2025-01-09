#include<bits/stdc++.h>
using namespace std;

// 1. Move Zeroes
void moveZeros(vector<int> & nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }

}

//is subsequence
bool isSubsequence(string s ,string t){
    int j = 0;
    if(s == "") return true;

    for(int i=0;i<t.size();i++){
        if(s[j]==t[j]){
            j++;
        }
        if(j==s.size()){
            return true;
        }
        
    }
    return false;
}

//container with most water
int maxArra(vector<int> &hight){
    int water =0;
    int i=0;
    int j= hight.size() -1;

    while(i<j){
        int h = min(hight[i],hight[j]);
        water = max(water, (j-i) * h);
        while(hight[i]<=h && i<j) i++;
        while(hight[j]<=h && i<j) j++;
    }
    return water;
}

//max Number of K sum Pairs
int maxOperation(vector<int> &nums, int k){
    int first = 0;
    int last = nums.size()-1;
    int count = 0; //{2,3,4,5}//sort the array
    sort(nums.begin(),nums.end());
    while(first<last){
        if(nums[first]+nums[last]==k){
            count++;
            first++;
            last--;
        }
        else if(nums[first]+nums[last]>k){
                last--;
        }
        else{
            first++;
        }
    }
    return count;
}


int main(){
    vector<int> nums={0,9,8,7,0,0,9};
    moveZeros(nums);
    cout<<"this is the MoveZerro at the last "<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    string s = "lskd";
    string t = "sldkj";
    cout<<"this is the isSubsequence "<<endl;
    if(isSubsequence(s,t)==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    cout<<"This answe is th container with most water"<<endl;
    vector<int> nums2 = {6,4,2,6,4,5,6,7,8};
    int ans2 = maxArra(nums2);
    cout<<ans2<<endl;

    cout<<"Max number of k Sum Pair"<<endl;
    vector<int> nums3 = {3,4,5,2};
    int k = 7;
    int ans = maxOperation(nums3, k);
    cout<<ans<<endl;
    
}