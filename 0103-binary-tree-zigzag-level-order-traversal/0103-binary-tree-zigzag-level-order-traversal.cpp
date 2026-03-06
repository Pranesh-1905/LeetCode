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
    void level(TreeNode* root,vector<vector<int>> &v,int i){
        if(root==nullptr){
            return;
        }
        if(i>=v.size()){
            v.push_back({});
        }
        v[i].push_back(root->val);
        level(root->left,v,i+1);

        level(root->right,v,i+1);
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        level(root,v,0);
        for(auto i=0;i<v.size();i++){
            if(i%2==1){
                reverse(v[i].begin(),v[i].end());
            }
        }
        return v;
    }
};