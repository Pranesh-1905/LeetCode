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
        if(root==nullptr){
            v.push_back(INT_MIN);
        return;
        }
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==nullptr && q==nullptr) return true;
        if (p==nullptr || q==nullptr || p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};