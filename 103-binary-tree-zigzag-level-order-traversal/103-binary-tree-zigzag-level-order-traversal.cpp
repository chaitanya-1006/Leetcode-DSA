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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        
        while(!s1.empty() || !s2.empty())
        {
            vector<int> temp;
            int count=0;
            if(!s1.empty() && s2.empty())
            {
                count=s1.size();
            }
            while(count)
            {
                TreeNode* curr=s1.top();
                temp.push_back(curr->val);
                if(curr->left!=NULL)
                    s2.push(curr->left);
                if(curr->right!=NULL)
                    s2.push(curr->right);
                
                s1.pop();
                count--;
                
            }
            ans.push_back(temp);
            temp.clear();
            
            if(!s2.empty() && s1.empty())
            {
                count=s2.size();
            }
            while(count)
            {
                TreeNode* curr=s2.top();
                temp.push_back(curr->val);
                if(curr->right!=NULL)
                    s1.push(curr->right);
                if(curr->left!=NULL)
                    s1.push(curr->left);
                
                s2.pop();
                count--;
            }
            if(!temp.empty())
                ans.push_back(temp);
            
        }
        
        return ans;
        
        
    }
};