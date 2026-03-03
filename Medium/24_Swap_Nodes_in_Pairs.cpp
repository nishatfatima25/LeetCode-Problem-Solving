// LeetCode Problem : 24. Swap Nodes in Pairs
// Link : https://leetcode.com/problems/swap-nodes-in-pairs/description/

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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0,head);
        ListNode* prev = &dummy;
        ListNode* temp = head;

        while(temp && temp->next){
            ListNode* node = temp->next->next;
            ListNode* second = temp->next;

            second->next = temp;
            temp->next = node;
            prev->next = second;

            prev = temp;
            temp = node;
        }

        return dummy.next;
    }
};
