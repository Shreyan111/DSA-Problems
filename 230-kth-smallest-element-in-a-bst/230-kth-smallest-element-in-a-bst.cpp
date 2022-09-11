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
    void smallest(TreeNode* root, priority_queue<int> &q, int k){
        if(q.size() > k) q.pop();
        
        q.push(root -> val);    
        if(root -> left) smallest(root -> left, q, k);
        
        if(root -> right) smallest(root -> right, q, k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        priority_queue <int> q;
        smallest(root, q, k);
        if(q.size() > k) q.pop();
        return q.top();
    }
};