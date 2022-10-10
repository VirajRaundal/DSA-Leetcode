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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        compute (ans, root, 0);
        
        return ans;
    }
    
    void compute(vector<vector<int>> &ans, TreeNode* root, int level){
        vector<int> li;
        
        if(root==NULL) return;
        
        if(ans.size()==level) ans.push_back(li);
        
        for(int lvl=0; lvl<ans.size(); lvl++){
            if(lvl==level)
                ans[lvl].push_back(root->val);
        }
        
        compute(ans, root->left, level+1);
        compute(ans, root->right, level+1);
    }
};