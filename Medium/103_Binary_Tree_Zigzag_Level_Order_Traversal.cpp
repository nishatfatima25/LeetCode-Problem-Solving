// LeetCode Problem : 103. Binary Tree Zigzag Level Order Traversal
// Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> level(size);

            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();

                int idx = (leftToRight) ? i : size-1-i;

                level[idx] = node->val;

                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }

            leftToRight = !leftToRight;
            ans.push_back(level);
        }

        return ans;
    }
};
