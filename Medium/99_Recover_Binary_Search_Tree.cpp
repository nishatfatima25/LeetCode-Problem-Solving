// LeetCode Problem : 99. Recover Binary Search Tree
// Link : https://leetcode.com/problems/recover-binary-search-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* node){
        if(node == nullptr) return;
        inorder(node->left);
        if(prev && prev->val > node->val){
            if(!first) first = prev;
            second = node;
        }

        prev = node;
        inorder(node->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val,second->val);
    }
};
