#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insetAtHead(Node* & head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    Node* first = new Node(10);
    // cout<<first->data <<endl;
    // cout<<first->next<<endl;

    Node* head = first;
    print(head);
    insetAtHead(head, 20);
    print(head);
     insetAtHead(head, 5);
    print(head);

}