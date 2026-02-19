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

//Brute Force
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

//Optimal Approach
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0; i<n; i++) fast = fast->next;
        if(fast == NULL) return head->next; //edge case

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;

        delete delNode;
        return head;
    }
};
