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
    TreeNode* subtree = NULL;
    void recursion(TreeNode* root, int val){
        if(root == NULL){
            return;
        }
        if(root -> val == val){
            subtree = root;
            return;
        }
        else if(root -> val > val){
            root = root -> left;
            recursion(root, val);
            return;
        }
        else{
            root = root -> right;
            recursion(root, val);
            return;
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        recursion(root, val);
        return subtree;
    }
};