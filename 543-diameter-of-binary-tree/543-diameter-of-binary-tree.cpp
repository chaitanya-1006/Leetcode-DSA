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
    int maxHeight=0;
    int heightOfBinaryTree(TreeNode* root)
    {
        if(!root)
            return 0;
        int lh=heightOfBinaryTree(root->left);
        int rh=heightOfBinaryTree(root->right);
        cout<<lh<<rh<<maxHeight<<endl;
        maxHeight=max(maxHeight,lh+rh+1);
        
        return max(lh,rh)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        heightOfBinaryTree(root);
        return maxHeight-1;
    }
};