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

int rheight(TreeNode* root)
{
    int count=0;
          while(root)
            {
                 count++;
                 root=root->right;
            }
            return count;
}


int lheight(TreeNode* root)
{
    int count=0;
          while(root)
            {
                  count++;
                root=root->left;
               
            }
         return count;   
}
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int rh=rheight(root);
        int lh=lheight(root);
        if(rh==lh) 
        { return (1 << lh) - 1;}
        else
        {return countNodes(root->left)+countNodes(root->right)+1;}

    }
    
};

