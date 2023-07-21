
     class Solution {
public:
    int getHeight(TreeNode* root) {
        if (!root)
            return 0;
        
        int leftHeight = getHeight(root->left);
        if (leftHeight == -1)
            return -1; // Left subtree is unbalanced, propagate -1 upwards
        
        int rightHeight = getHeight(root->right);
        if (rightHeight == -1)
            return -1; // Right subtree is unbalanced, propagate -1 upwards
        
        if (abs(leftHeight - rightHeight) > 1)
            return -1; // Tree is unbalanced, propagate -1 upwards
        
        return max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
};

   
       
