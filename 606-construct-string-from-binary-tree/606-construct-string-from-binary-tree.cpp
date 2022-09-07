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




































// class Solution {
// public:
//     void dfs(TreeNode* root,string&ans){
//         if(!root)return;
//         if(root->val>=0){
//             string temp = to_string(root->val);
//             ans+=temp;
//         }else{
//             ans.push_back('-');
//             string temp = to_string(abs(root->val));
//             ans+=temp;
//         }
        
//         if(root->left || root->right){
//             ans.push_back('(');
//             dfs(root->left,ans);
//             ans.push_back(')');
//         }
//         if(root->right){
//             ans.push_back('(');
//             dfs(root->right,ans);
//             ans.push_back(')');
//         }
//     }
//     string tree2str(TreeNode* root) {
//         string ans="";
//         dfs(root,ans);
//         return ans;
//     }
// };