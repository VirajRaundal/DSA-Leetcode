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

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        
        solve(ans, root, 0);
        
        return ans;
    }
    
    void solve(vector<vector<int>> &ans, Node* root, int level){
        
        vector<int> newList;
        
        if(root==NULL) return;
        
        if(ans.size()==level) ans.push_back(newList);
        
        for(int i=0; i<ans.size();i++){
            if(i==level)
                ans[i].push_back(root->val);
        }
        
        for(int i=0; i<root->children.size();i++)
            solve(ans,root->children[i], level+1);
    }
};