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
    bool find(TreeNode *root1, TreeNode* root2) {
        if(!root1){
            return !root2; //return false if root 1 is not here
        }
        if(!root2){
            return !root1; //return false if root is not here
        }
        return (root1 -> val == root2 -> val) && find(root1 -> left, root2->right) && find(root1 -> right, root2 -> left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return find(root -> left, root -> right);
    }
};