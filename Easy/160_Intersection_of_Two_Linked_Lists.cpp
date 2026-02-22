// LeetCode Problem : 160. Intersection of Two Linked Lists
// Link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Brute
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        unordered_map<ListNode*,int> mpp;

        while(temp != NULL){
            mpp[temp] = 1;
            temp = temp->next;
        }

        temp = headB;
        while(temp != NULL){
            if(mpp.find(temp) != mpp.end()) return temp;
            temp = temp->next;
        }
        return NULL;
    }
};

//Better
class Solution {
public:
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }

    ListNode* collisionPt(ListNode* t1, ListNode* t2, int d){
        while(d){
            d--;
            t2 = t2->next;
        }

        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
        
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int n1 = length(headA);
       int n2 = length(headB);

       if(n1 < n2) return collisionPt(headA, headB, n2-n1);
       else return collisionPt(headB, headA, n1-n2);
    }
};

//Optimal
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* t1 = headA;
        ListNode* t2 = headB;

        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;

            if(t1 == t2) return t1;

            if(t1 == nullptr) t1 = headB;
            if(t2 == nullptr) t2 = headA;
        }

        return t1;
    }
};
