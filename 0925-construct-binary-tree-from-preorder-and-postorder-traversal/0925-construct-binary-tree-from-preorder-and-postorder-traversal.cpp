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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int i=0;
        int j=0;
        return sol(preorder,postorder, i, j);
    }
    TreeNode *sol(vector<int> preorder,vector<int> postorder,int &i,int &j){
        TreeNode *n=new TreeNode(preorder[i]);
        i++;
        if(n->val==postorder[j]){
            j++;//basecase such that pre (root->l>r) post(l->r->root) 
            return n;//root is the beg and end of pre and post soo we   
                     //have it as base case
        }
        n->left=sol(preorder,postorder,i,j);
        if (n->val != postorder[j] && i < preorder.size())
        n->right=sol(preorder,postorder,i,j);
        j++;
        return n;
    }
};