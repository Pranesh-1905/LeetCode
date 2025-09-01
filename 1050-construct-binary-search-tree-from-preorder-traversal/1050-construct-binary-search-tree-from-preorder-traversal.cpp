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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=nullptr;
        for(auto i:preorder){
            root=create(root,i);
        }
        return root;

    }
    TreeNode*create(TreeNode*root,int v){
        if(root==nullptr){
            TreeNode* newnode=new TreeNode(v);
            return newnode; 
        }
        else if(root->val>v){
            root->left=create(root->left,v);
        }
        else{
            root->right=create(root->right,v);
        }
        return root;
    }
};