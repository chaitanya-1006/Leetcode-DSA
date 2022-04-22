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
    int isBalancedUTIL(TreeNode* root)
    {
        if(!root)
            return 0;
        int lh=isBalancedUTIL(root->left);
        if(lh==-1)
            return -1;
        int rh=isBalancedUTIL(root->right);
        if(rh==-1)
            return -1;
        if(abs(lh-rh)>1)
            return -1;
        else
            return max(lh,rh)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        int ans=isBalancedUTIL(root);
        if(ans==-1)
            return 0;
        else
            return 1;
    }
};