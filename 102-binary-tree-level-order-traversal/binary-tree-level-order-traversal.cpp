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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};
        queue<TreeNode*>que;
        vector<vector<int>>ans;

        que.push(root);
        while(!que.empty())
        {
            int size=que.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                    TreeNode*n=que.front();
                    que.pop();
                    if(n->left!=NULL) que.push(n->left);
                    if(n->right!=NULL) que.push(n->right);
                    level.push_back(n->val);
            }
            ans.push_back(level);
        }



        return ans;

    }
};
