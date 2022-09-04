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
    unordered_map<int, pair<int, int>> maps;// this stores root values and in pair stores depth and parent value
    
    void preOrder(TreeNode* root, TreeNode* parent, int depth)
    {
        if(root == NULL){
            return;
        }
        
        maps[root -> val] = {depth, parent -> val};
        
        preOrder(root -> left, root, depth + 1);
        preOrder(root -> right, root, depth + 1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL){
            return false;
        }
        
        preOrder(root, root, 0);
        
        //depth should be same and parent should be different
        return maps[x].first == maps[y].first && maps[x].second != maps[y].second;
    }
};