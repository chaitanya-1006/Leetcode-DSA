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
    int ans;
    void Inorder(TreeNode* root, int &k,int &count)
    {
    //     if(!root)
    //         return 0;
        if(root->left!=NULL)
             Inorder(root->left,k,count);
        count+=1;
        cout<<count;
        if(count==k)
        {
            ans=root->val;
            return;
        }
        if(root->right!=NULL)
            Inorder(root->right,k,count);
        
        return;
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        Inorder(root,k,count);
        return ans;
        
    }
};