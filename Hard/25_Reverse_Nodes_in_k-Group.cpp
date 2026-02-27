// LeetCode Problem : 25. Reverse Nodes in k-Group
// Link : https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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

    ListNode* findKthNode(ListNode* temp, int k){
        k -= 1;
        while(temp != NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    } 
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;

        while(temp != NULL){
            ListNode* kthNode = findKthNode(temp,k);

            if(kthNode == NULL){
                if(prevNode) prevNode->next = temp;
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reverse(temp);

            if(temp == head) head = kthNode;
            else{
                prevNode->next = kthNode;
            }

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};
