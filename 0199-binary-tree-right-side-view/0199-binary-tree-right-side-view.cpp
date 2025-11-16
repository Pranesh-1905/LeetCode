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
    void level(int lev,vector<vector<int>> &l,TreeNode* root){
        if(root==nullptr){
            return;
        }
        if(l.size()<=lev){
            l.push_back({});
        }
        l[lev].push_back(root->val);
        level(lev+1,l,root->left);
        
        level(lev+1,l,root->right);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> l;
        level(0,l,root);
        vector<int> ans;
        for(auto i:l){
            ans.push_back(i[i.size()-1]);
        }
        return ans;
    }
};