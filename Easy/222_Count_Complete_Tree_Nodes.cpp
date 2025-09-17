// LeetCode Problem : 222. Count Complete Tree Nodes
// Link : https://leetcode.com/problems/count-complete-tree-nodes/description/

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

    void preorder(TreeNode* node, vector<int> &ans){
        if(node == NULL) return;

        ans.push_back(node->val);
        preorder(node->left, ans);
        preorder(node->right, ans);
    }

    int countNodes(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans.size();
    }
};
