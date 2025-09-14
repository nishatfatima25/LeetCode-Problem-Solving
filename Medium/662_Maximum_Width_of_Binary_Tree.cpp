// LeetCode Problem : 662. Maximum Width of Binary Tree
// Link : https://leetcode.com/problems/maximum-width-of-binary-tree/description/

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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root == NULL) return 0;
        queue<pair<TreeNode*,int>> q;
        long long maxWidth=0;
        q.push({root,0});

        while(!q.empty()){
            int size = q.size();
            long long mini = q.front().second; //to make it starting from 0  
            long long first,last;

            for(int i=0; i<size; i++){
                long long currId = q.front().second - mini;
                TreeNode* node = q.front().first;
                q.pop();

                if(i==0) first = currId;
                if(i==size-1) last = currId;

                if(node->left){
                    q.push({node->left,currId*2+1});
                }
                if(node->right){
                    q.push({node->right,currId*2+2});
                }
            }

            maxWidth = max(maxWidth,last-first+1);
        }

        return (int)maxWidth;
    }
};
