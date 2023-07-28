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

bool possible(TreeNode* root,long l,long r)
{
    if(root==NULL) return true;
    if(root->val<r && root->val >l) 
    {
        return possible(root->left,l,root->val) && possible(root->right,root->val,r);
    }
    else
    {
        return false;
    }
}
    bool isValidBST(TreeNode* root) {
        return possible(root,LONG_MIN,LONG_MAX);
    }
};