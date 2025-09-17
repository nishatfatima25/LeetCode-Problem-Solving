// LeetCode Problem : 2236. Root Equals Sum of Children
// Link : https://leetcode.com/problems/root-equals-sum-of-children/description/

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
    bool checkTree(TreeNode* root) {
        if(root == NULL) return false;
        
        int sum =0;

        if(root->left) sum += root->left->val;
        if(root->right) sum += root->right->val;

        if(sum == root->val) return true;

        return false;
    }
};
