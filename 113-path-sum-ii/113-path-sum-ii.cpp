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
    void search(TreeNode* root, int targetSum, vector<vector<int>> &ans, vector<int> &cur, int &sum){
        
        if(root == NULL) return;
        
        //if we reach the leaf, push the cur in ans if equal to target sum and then start pop back which means start backtracking
        if(root -> left == NULL && root -> right == NULL){
            if(sum + root -> val == targetSum){
                cur.push_back(root -> val);
                ans.push_back(cur);
                cur.pop_back(); //pop the value but didnt start backtracking
                return; //start backtracking
            }else return;
        }
        
        //for left node
        if(root -> left != NULL){
            cur.push_back(root -> val);
            sum = sum + root -> val;
            search(root -> left, targetSum, ans, cur, sum);
            //backtrack from left node
            sum = sum - root -> val;
            cur.pop_back();
        }
        
        //for right node
        if(root -> right != NULL){
            cur.push_back(root -> val);
            sum = sum + root -> val;
            search(root -> right, targetSum, ans, cur, sum);
            //backtrack from right node
            sum = sum - root -> val;
            cur.pop_back();
        }
    }
    
    vector<vector<int>> pathSum (TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> cur;
        int sum = 0;
        search(root, targetSum, ans, cur, sum);
        return ans;
    }
};