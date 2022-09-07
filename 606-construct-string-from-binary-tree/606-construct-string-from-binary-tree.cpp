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
    void dfs(TreeNode* root, string& ans){
        if(root == NULL){
            return;
        }
        string temp = to_string(root -> val);
        ans = ans + temp;
        
        if(root -> left || root -> right){
            ans = ans + '(';
            dfs(root -> left, ans);
            ans = ans + ')';
        }
        
        if(root -> right){
            ans = ans + '(';
            dfs(root -> right, ans);
            ans = ans + ')';
        }
        return;
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        dfs(root, ans);
        return ans;
    }
};