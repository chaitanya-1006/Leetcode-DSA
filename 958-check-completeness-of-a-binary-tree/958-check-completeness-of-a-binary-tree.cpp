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
    bool isCompleteTree(TreeNode* root) {
        if (!root)
            return true;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=false;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(flag==false)
            {
                if(curr->left==NULL && curr->right!=NULL)
                    return false;
                if(curr->left==NULL && curr->right==NULL)
                    flag=true;

                if(curr->left)
                    q.push(curr->left);
                

                if(curr->right)
                    q.push(curr->right);
                else
                    flag=true;
            }
            else
            {
                if(curr->left || curr->right)
                    return false;
            }
            
        }
        
        return true;
    }
};