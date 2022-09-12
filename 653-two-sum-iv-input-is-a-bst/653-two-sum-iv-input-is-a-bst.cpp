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
    unordered_map<int, int> maps;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL){
            return false;
        }
        
        int a = k - (root -> val);
        
        if(maps.find(a) != maps.end()){
            return true;
        }
        
        maps[root -> val]++;
        
        if(findTarget(root -> left, k) || findTarget(root -> right, k)){
            return true;
        }
    
    return false;
    }
};