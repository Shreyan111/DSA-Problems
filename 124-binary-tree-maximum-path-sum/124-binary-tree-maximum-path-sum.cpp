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
    int maxp(TreeNode* root, int &maxi){
        if(root == NULL) return 0;
        int left = max(0, maxp(root -> left, maxi)); //0 is put to avoid the -ve node values
        int right = max(0, maxp(root -> right, maxi)); //0 is put to avoid the -ve node values
        maxi = max(maxi, max(left + right + root -> val, root -> val)); //if root value is greater than maxi that is why root -ve val is also considered
        return root -> val + max(left, right);
    }
    
    int maxPathSum(TreeNode* root) {
        int maxS = INT_MIN;
        int ans = maxp(root, maxS);
        return maxS;
    }
};