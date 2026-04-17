// LeetCode Problem : 113. Path Sum II
// Link : https://leetcode.com/problems/path-sum-ii/description/

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
    void func(TreeNode* root, int targetSum, vector<int> &arr, vector<vector<int>> &ans){
        if(!root) return;

        arr.push_back(root->val);
        targetSum -= root->val;

        if(!root->left && !root->right && targetSum == 0) ans.push_back(arr);

        func(root->left,targetSum,arr,ans);
        func(root->right,targetSum, arr,ans);

        arr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(root,targetSum,arr,ans);
        return ans;
    }
};
