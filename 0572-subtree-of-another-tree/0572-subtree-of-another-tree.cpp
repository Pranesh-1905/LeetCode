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
    string searialize(TreeNode* root){
        if(root==nullptr){
            return "N";
        }
        return "("+to_string(root->val)+","+searialize(root->left)+","+searialize(root->right)+")";
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string main=searialize(root);
        string sub=searialize(subRoot);
        return main.find(sub)!=string::npos;
    }
};