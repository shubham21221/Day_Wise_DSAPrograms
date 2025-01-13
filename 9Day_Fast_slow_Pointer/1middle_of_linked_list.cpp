//  https://leetcode.com/problems/middle-of-the-linked-list/
/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //empty linked list
        if(head == NULL){
            return head;
        }
        //Single node in the linked list
        if(head->next == NULL){
            return head;
        }
        // starting the trveasal with fast and slow pointerr
        //creation the pointer
        ListNode* slow = head;
        ListNode* fast= head;
        //fast and slow both are vaild
        while(fast != NULL &&  fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;//move toatal 2 staps
        }
        return slow;
    }
};
