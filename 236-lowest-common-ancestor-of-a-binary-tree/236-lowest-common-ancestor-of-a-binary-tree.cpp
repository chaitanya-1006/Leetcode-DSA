/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findPath(TreeNode* root,vector<TreeNode*> &path,int t)
    {
        if(!root)
            return false;
        path.push_back(root);
        if(root->val==t)
            return true;
        if(findPath(root->left,path,t) || findPath(root->right,path,t))
            return true;
        
        path.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathOfP;
        vector<TreeNode*> pathOfQ;
        if(!p)
            return q;
        if(!q)
            return p;
        findPath(root,pathOfP,p->val);
        findPath(root,pathOfQ,q->val);
        for(auto x:pathOfP)
        {
            cout<<x->val<<" ";
        }
        cout<<endl;
        for(auto x:pathOfQ)
        {
            cout<<x->val<<" ";
        }
        cout<<endl;
        int i=0;
        for(;i<pathOfP.size()-1 && i<pathOfQ.size()-1;i++)
        {
            if(pathOfP[i+1]!=pathOfQ[i+1])
                return pathOfP[i];
        }
        if(i>=pathOfP.size()-1 || i>=pathOfQ.size()-1)
        {
            return pathOfP[i];
        }
        return NULL;
    }
};