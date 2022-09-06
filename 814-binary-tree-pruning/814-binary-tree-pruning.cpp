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
    int search(TreeNode* root, int count){
        if(root == NULL){
            return 0;
        }
        int left = search(root -> left, count);
        int right = search(root -> right, count);
        
        if(left == 0){
            root -> left = NULL;
        }
        if(right == 0){
            root -> right = NULL;
        }
        count = left + right + root -> val;
        return count;
    }
    TreeNode* pruneTree(TreeNode* root) {
        int count = 0;
        search(root, count);
        if(root -> val == 0 && root -> left == NULL && root -> right == NULL){
            root = NULL;
        }
        return root;
    }
};