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
    void in(TreeNode*root,vector<int>&v){
        if(root==nullptr)return;
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
    in(root,v);
    sort(v.begin(),v.end());
    return v[k-1];
    }
};