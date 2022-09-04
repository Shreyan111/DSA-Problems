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
// class Solution {

// public:
//     bool isBalanced(TreeNode* root) {
//         return dfsHeight(root) != -1; //if -1 is returned then false which means it is not balanced otherwise balanced
//     }

//     int dfsHeight (TreeNode *root) {
//         if (root == NULL){
//             return 0;
//         }
        
//         int leftHeight = dfsHeight (root -> left);
//         if (leftHeight == -1) 
//             return -1;
        
//         int rightHeight = dfsHeight (root -> right);
//         if (rightHeight == -1) 
//             return -1;
        
//         if (abs(leftHeight - rightHeight) > 1)  
//             return -1;

//         return max(leftHeight, rightHeight) + 1;
//     }
// };


class Solution {

public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }

    int dfsHeight (TreeNode *node) {
        if(node == NULL){
            return 0;
        }
        
        int lh = dfsHeight(node -> left);
        if(lh == -1){
            return -1;
        }
        
        int rh = dfsHeight(node -> right);
        if(rh == -1){
            return -1;
        }
        
        if(abs(lh - rh) > 1){
            return -1;
        }
        
        return 1 + max(lh, rh);
    }
};

































