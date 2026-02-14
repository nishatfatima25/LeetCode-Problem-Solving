// LeetCode Problem : 206. Reverse Linked List
// Link : https://leetcode.com/problems/reverse-linked-list/description/

// Brute force 
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
    ListNode* reverseList(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;

        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp != NULL){
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};


// Optimal
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            ListNode* front = temp->next;  //2. store the prev next
            temp->next = prev;  //1. new nextnode will be the prev one

            prev = temp; //4. preserve the prev
            temp = front; //3. temp++
        }

        return prev;
    }
};
