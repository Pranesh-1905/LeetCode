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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return create(nums,0,nums.size()-1);
    }
    TreeNode* create(vector<int> v,int l,int r){
        if(l>r) return nullptr;
        int mid=(l+r)/2;
        TreeNode* n= new TreeNode(v[mid]);
        n->left=create(v,l,mid-1);
        n->right=create(v,mid+1,r);
        return n;
    }
};