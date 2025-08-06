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
    void in(TreeNode*p,TreeNode*q,bool&f){
        if (p == nullptr && q == nullptr) return;
        if (p == nullptr || q == nullptr) {
            f = false;
            return;
        }
        in(p->left,q->left,f);
        if(p->val!=q->val) f=false;
        in(p->right,q->right,f);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool f=true;
        in(p,q,f);
        return f;
    }
};