
class Solution {
public:
    int rangeSumBST(TreeNode* root, int l, int h) {
        if(root==nullptr) return 0;

        if(root->val>=l && root->val<=h)
        return root->val + rangeSumBST(root->left,l,h)+rangeSumBST(root->right,l,h);
        else if(root->val<l)
        return rangeSumBST(root->right,l,h);
        else return rangeSumBST(root->left,l,h);
    }
};
        