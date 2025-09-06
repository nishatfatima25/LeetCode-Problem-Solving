// LeetCode Problem : 144. Binary Tree Preorder Traversal
// Link : https://leetcode.com/problems/binary-tree-preorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

class Solution {
public:
    void preOrder(TreeNode* node, vector<int>& ans) {
        if (node == nullptr)
            return;

        ans.push_back(node->val);
        preOrder(node->left, ans);
        preOrder(node->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(root, ans);

        return ans;
    }
};


// Iterative Approach
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;

        if(root == NULL) return preorder;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();

            preorder.push_back(root->val);

            if(root->right != NULL){
                st.push(root->right);
            }
            if(root-> left != NULL){
                st.push(root->left);
            }
        }

        return preorder;
    }
};
