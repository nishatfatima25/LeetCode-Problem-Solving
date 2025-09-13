// LeetCode Problem : 236. Lowest Common Ancestor of a Binary Tree
// Link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // if root is equal to the following values then return that node
        if(root == NULL || root == p || root == q) return root;

        // take values from left and right thru recursion
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        // if left is null return the right node and vice-versa
        if(left == NULL) return right;
        else if(right == NULL) return left;

        // otherwise, if both the nodes are not null return their parent
        else return root;
    }
};
