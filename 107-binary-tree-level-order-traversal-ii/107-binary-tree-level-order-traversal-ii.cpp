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
    void level(TreeNode* root, vector<vector<int>>& ans){
        if(root == NULL){
            return;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int a = q.size();
            vector<int> v;
            while(a--){
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr -> val);
                if(curr -> left != NULL){
                    q.push(curr -> left);
                }
                if(curr -> right != NULL){
                    q.push(curr -> right);
                }
            }
            ans.push_back(v);
        }
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        level(root, answer);
        vector<vector<int>> res;
        for(int i = answer.size() - 1; i >= 0; i--){
            vector<int> v = answer[i]; //reverse a vector<vector<int>> array
            res.push_back(v);
        }
        return res;
    }
};
