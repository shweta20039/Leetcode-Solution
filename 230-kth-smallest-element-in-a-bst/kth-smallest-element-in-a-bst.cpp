class Solution {
public:
    int kthSmallest(TreeNode* root, int&k) {
        if(root==NULL) return-1;
       
        int temp=kthSmallest(root->left,k);
        if(k==0) return temp;
        
        k--;
        
        if(k==0) return root->val;

        return kthSmallest(root->right,k);
    }
};
