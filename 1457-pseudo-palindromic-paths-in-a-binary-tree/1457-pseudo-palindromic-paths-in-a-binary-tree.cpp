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
    int ans = 0;
    unordered_map<int, int> maps;
    void solve(TreeNode* root){
        if(root == NULL) return;
        
        maps[root -> val]++;
            
        if(root -> left == NULL & root -> right == NULL){
            int z = 0;
            
            for(auto itr : maps){
                if(itr.second % 2 == 1){
                    z++;
                }
            }
            if(z <= 1) ans++;
        }
            
        solve(root -> left);
        solve(root -> right);
        
        maps[root -> val]--;
        
        return;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        solve(root);
        return ans;
    }
};