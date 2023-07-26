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
    TreeNode* insertIntoBST(TreeNode* root, int vall) {
        
        if(root==nullptr) 
        {
            root=new TreeNode(vall);
            return root;
            
        }
        TreeNode* temp=root;
        while(root)
        {
            if(temp->val<=vall)
            {
                if(temp->right!=NULL)
                {
                    temp=temp->right;
                }
                else
                {
                    temp->right=new TreeNode(vall);
                    break;
                }
            }
            else
            {
                if(temp->left!=NULL)
                {
                    temp=temp->left;
                }
                else
                {
                    temp->left=new TreeNode(vall);
                    break;
                }
            }

        }
            return root;
    }
};