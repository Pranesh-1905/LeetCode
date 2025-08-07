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
    int dfs(TreeNode* root,int m){
        if(root ==nullptr) return 0;
        int res=root->val>=m?1:0;
        m=max(m,root->val);
        res+=dfs(root->left,m);
        res+=dfs(root->right,m);
        return res;
    }
    int goodNodes(TreeNode* root) {
        int res=dfs(root,INT_MIN);
        return res;
    }
};