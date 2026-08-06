// LeetCode Problem : 133. Clone Graph
// Link : https://leetcode.com/problems/clone-graph/description/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {

        if(node == NULL) return NULL;
        
        queue<Node*> q;
        unordered_map<Node*,Node*> mpp;

        q.push(node);
        mpp[node] = new Node(node->val);

        while(!q.empty()){
            Node* u = q.front();
            q.pop();

            for(auto &it : u->neighbors){
                if(mpp.find(it) == mpp.end()){
                    mpp[it] = new Node(it->val);
                    q.push(it);
                }

                mpp[u]->neighbors.push_back(mpp[it]);
            }
        }

        return mpp[node];
    }
};
