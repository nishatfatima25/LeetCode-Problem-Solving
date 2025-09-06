// LeetCode Problem : 145. Binary Tree Postorder Traversal
// Link : https://leetcode.com/problems/binary-tree-postorder-traversal/description/

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

    void postOrder(TreeNode* node, vector<int>& ans){
        if(node == nullptr) return;

        postOrder(node->left, ans);
        postOrder(node->right, ans);
        ans.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> ans;
        postOrder(root,ans);

        return ans;
    }
};


// using two-stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1,st2;

        st1.push(root);

        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);

            if(root->left != NULL){
                st1.push(root->left);
            }
            if(root->right != NULL){
                st1.push(root->right);
            }
        }

        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }

        return postorder;
    }
};
