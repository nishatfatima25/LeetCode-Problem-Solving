// LeetCode Problem : 337. House Robber III
// Link : https://leetcode.com/problems/house-robber-iii/description/

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
    pair<int,int> func(TreeNode* root){
        if(!root) return {0,0};
        auto left = func(root->left);
        auto right = func(root->right);

        int rob = root->val + left.second + right.second;
        int notRob = max(left.first,left.second) + max(right.first,right.second);

        return {rob,notRob};
    }
    int rob(TreeNode* root) {
        auto ans = func(root);
        return max(ans.first,ans.second);
    }
};
