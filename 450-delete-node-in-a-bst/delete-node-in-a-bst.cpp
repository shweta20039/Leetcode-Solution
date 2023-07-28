

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key)
     {
                if(root==nullptr) return NULL;
                TreeNode* temp=root;
                if(root->val==key) return help(root);
            while(root!=nullptr)
            {
                if(root->val>key)
                {
                    if(root->left!=NULL && root->left->val==key)
                    {
                        root->left=help(root->left);
                        
                        break;
                    }
                    else
                    {
                    root=root->left;
                    }
                }
                else
                {
                    if(root->right!=NULL && root->right->val==key)
                    {
                        root->right=help(root->right);
                       
                        break;
                    }
                    else
                    {
                    root=root->right;
                    }
                }
            }
            return temp;
    }

    TreeNode* help(TreeNode* root)
    {
        if(root->left==NULL) return root->right;
        if(root->right==NULL) return  root->left;
        TreeNode* rightchild=root->right;
        TreeNode* lastleft=find(root->left);
        lastleft->right=rightchild;         
        return root->left;

    }
    TreeNode*find(TreeNode* root)
    {
        while(root->right)
        {
            root=root->right;
        }
        return root;
    }
};