// LeetCode Problem : 203. Remove Linked List Elements
// Link : https://leetcode.com/problems/remove-linked-list-elements/description/

/**
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while(temp != NULL){
            if(temp->val == val){
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
            
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
