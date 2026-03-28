// LeetCode Problem : 23. Merge k Sorted Lists
// Link : https://leetcode.com/problems/merge-k-sorted-lists/description/

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
class Comp{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<ListNode*, vector<ListNode*>, Comp> minHeap;
       for(auto it : lists){
        if(it != NULL) minHeap.push(it);
       }

       ListNode* dummy = new ListNode(0);
       ListNode* temp = dummy;

       while(!minHeap.empty()){
        ListNode* node = minHeap.top();
        minHeap.pop();

        temp->next = node;
        temp = temp->next;

        if(node->next != NULL) minHeap.push(node->next);
       }

       return dummy->next;
    }
};
