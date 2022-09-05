/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

//N-ary trees consist many children for a specific parent so we store all the children in the queue and then fo each children we are storing the values and further storing it in ans and children's children, we are storing it again in a queue and will continue until we have queue size

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root){
            return {};
        }
        
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        while(q.size()){
            int n = q.size();
            vector<int> result;
            while(n--){
                auto f = q.front();
                q.pop();
                for(auto a : f -> children){
                    q.push(a);
                }
                result.push_back(f -> val);
            }
            ans.push_back(result);
        }
        return ans;
    }
};