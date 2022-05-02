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
    TreeNode* temp1=NULL;
    TreeNode* temp2=NULL;
    TreeNode* prev=NULL;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        if(prev!=NULL && root->val < prev->val)
        {
            if(temp1==NULL)
                temp1=prev;
            temp2=root; 
        }
        prev=root;
        inorder(root->right);
        
        return;
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        cout<<temp1->val<<temp2->val;
        int temp=temp1->val;
        temp1->val=temp2->val;
        temp2->val=temp;
        
        return;
    }
};