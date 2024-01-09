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
    void order(TreeNode*root,string&s)
    {
        if(root==nullptr) return;
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val)+"_";
        }
        order(root->left,s);
        order(root->right,s);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="";
        string s2="";

        order(root1,s1);
        order(root2,s2);


        if(s1==s2) return true;
        return false;
    }
};