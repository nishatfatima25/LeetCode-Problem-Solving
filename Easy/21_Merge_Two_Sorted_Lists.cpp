// LeetCode Problem : 21. Merge Two Sorted Lists
// Link : https://leetcode.com/problems/merge-two-sorted-lists/description/

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
//Brute
class Solution {
public:

    ListNode* convertToLL(vector<int> &arr){
        ListNode* head = new ListNode(arr[0]);
        ListNode* mover = head;

        for(int i=1; i<arr.size(); i++){
            ListNode* temp = new ListNode(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL && list2 == NULL) return NULL;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        vector<int> arr;

        while(temp1 != NULL){
            arr.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            arr.push_back(temp2->val);
            temp2 = temp2->next;
        }

        sort(arr.begin(),arr.end());
        ListNode* newhead = convertToLL(arr);

        return newhead;
    }
};
