// LeetCode Problem : 61. Rotate List
// Link : https://leetcode.com/problems/rotate-list/description/

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
    ListNode* findKthNode(ListNode* head, int k){
        k -= 1;
        ListNode* temp = head;
        while(temp != NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* getTail(ListNode* head){
        ListNode* temp  = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        int len =0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        k = k % len;
        if(k==0) return head;
        ListNode* kthNode = findKthNode(head,len-k);
        ListNode* newHead = kthNode->next;
        ListNode* tail = getTail(head);

        tail->next = head;
        kthNode->next = nullptr;

        return newHead;
    }
};
