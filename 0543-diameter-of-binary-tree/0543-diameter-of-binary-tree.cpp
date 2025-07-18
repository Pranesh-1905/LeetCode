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
    int m=0;
    int ldep(TreeNode*root){
        if(root==nullptr){
            return 0;
        }
        int l=ldep(root->left);
        int r=ldep(root->right);
        m=max(m,l+r);
        
        return 1+ max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ldep(root);
        return m;
    }
};