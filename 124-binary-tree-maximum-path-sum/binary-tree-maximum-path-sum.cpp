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



int maxi(TreeNode* root,int& maxsum)
{
    if(!root) return 0;

    int l=max(0,maxi(root->left,maxsum));
    int r=max(0,maxi(root->right,maxsum));
        maxsum = max(maxsum, l + r + root->val);

    return max(l,r)+root->val;

}
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        maxi(root,maxsum);
        return maxsum;
    }
};


 