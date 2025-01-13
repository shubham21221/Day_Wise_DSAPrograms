#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    while(head){
        ListNode* nextNode = head->next;
        head->next = prev;
        prev= head;
        head=nextNode;
    }
    return prev;
}

bool isPalindrome(ListNode* head){
    if(!head || !head->next) return true;
    //step 1 find the middle using slow and fast pointers
    ListNode* slow = head;
    ListNode*  fast = head;
    while(fast&& fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    //step 2 reverse the second half of the list
    ListNode* secondHalf = reverseList(slow);
    //compare the first and second halves
    ListNode* firstHalf = head;
    ListNode* temp = secondHalf ;
    while(secondHalf){
        if(firstHalf->val != secondHalf->val){
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    reverseList(temp);
    return true;
}

ListNode* createLinkdedList(const vector<int>& value){
    ListNode* dummy = new ListNode();
    ListNode* temp = dummy;
    for(int val: value){
        temp->next = new ListNode(val);
        temp=temp->next;
    }
    return dummy->next;
}

void print(ListNode* head){
    while(head){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    vector<int> values1 = {1,2,2,1};
    ListNode* head1 = createLinkdedList(values1);
    cout<<"Input Linkedlist List: ";
    print(head1);
    cout<<"is palindrome? " <<(isPalindrome(head1)? "yes": "NO")<<endl;

    vector<int> values2={1,2,3};
    ListNode* head2 = createLinkdedList(values2);

    cout <<"Input Linked List: ";
    print(head2);
    cout<<" Is palindrome? "<<(isPalindrome(head2) ? " yes": "No")<<endl;
}