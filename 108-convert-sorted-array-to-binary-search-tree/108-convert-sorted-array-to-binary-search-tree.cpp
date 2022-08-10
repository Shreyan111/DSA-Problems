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
    TreeNode* solve(vector<int>& vec, int i, int j){
        if(i > j){
            return NULL;
        }
        
        int middle = i + (j - i)/2;
        TreeNode* root = new TreeNode(vec[middle]);
        
        root -> left = solve(vec, i, middle - 1); //left half will be from i to middle - 1
        root -> right = solve(vec, middle + 1, j); //right half will be from middle + 1 to j
        
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};