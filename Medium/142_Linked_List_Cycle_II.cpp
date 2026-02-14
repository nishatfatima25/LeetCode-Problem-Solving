// LeetCode Problem : 142. Linked List Cycle II
// Link : https://leetcode.com/problems/linked-list-cycle-ii/description/

// Brute Force
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* temp = head;
        int count = 0;

        unordered_map<ListNode*, int> mpp;

        while(temp != NULL){
            count++;
            int k = count-1;

            if(mpp.find(temp) != mpp.end()) return temp;
            mpp[temp] = k;
            temp = temp->next;
        }

        return NULL;
    }
};

// Optimal Approach

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                slow = head;

                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};
