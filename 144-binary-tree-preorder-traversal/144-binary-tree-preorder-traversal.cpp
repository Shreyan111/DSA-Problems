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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        stack<TreeNode*> stack;
        
        if(root == NULL){
            return preorder;
        }
        stack.push(root);
        
        while(!stack.empty()){
            TreeNode* topNode = stack.top();
            preorder.push_back(topNode -> val);
            stack.pop();
            if (topNode -> right != NULL)
                stack.push(topNode -> right);
            if (topNode -> left != NULL)
                stack.push(topNode -> left);
        }
        return preorder;
    }
};