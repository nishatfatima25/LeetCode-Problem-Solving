// LeetCode Problem : 19. Remove Nth Node From End of List
// Link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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

    ListNode* rev(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL) return head;

        ListNode* newHead = rev(head);
        ListNode* temp = newHead;
        ListNode* back = NULL;

        int count = 0;
        while(temp != NULL){
            count++;
            if(count == n) break;
            
            back = temp;
            temp = temp->next;
        }

        //if we are deleting head
        if(back == NULL) newHead = temp->next;
        else back->next = temp->next;
        
        delete temp;

        ListNode* original = rev(newHead);
        return original;
    }
};
