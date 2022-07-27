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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack<TreeNode*> stack;
        
        while(true){
            if(root != NULL){
                stack.push(root);
                root = root -> left;
            }
            else{
                if(stack.empty()) break;
                root = stack.top();
                inorder.push_back(root -> val);
                stack.pop();
                root = root -> right;
            }
        }
        return inorder;
    }
};