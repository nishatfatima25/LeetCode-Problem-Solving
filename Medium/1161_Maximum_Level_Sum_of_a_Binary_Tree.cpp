// LeetCode Problem : 1161. Maximum Level Sum of a Binary Tree
// Link : https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/

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
    int maxLevelSum(TreeNode* root) {
        
        if(!root) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int lev=1;
        int ans =1;
        long long maxSum = LLONG_MIN;

        while(!q.empty()){

            int n = q.size();
            long long levSum =0;

            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();

                levSum += node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(levSum > maxSum){
                maxSum = levSum;
                ans = lev;
            }
            lev++;
        }

        return ans;
    }
};
