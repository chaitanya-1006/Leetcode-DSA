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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*curr=root;
        if(root==NULL)
            return new TreeNode(val);
        
        // if(curr->val==val)
        //     return curr;
        else if(curr->val<val)
            curr->right=insertIntoBST(curr->right,val);
        else
            curr->left=insertIntoBST(curr->left,val);
            
        
        return root;
            
    }
};