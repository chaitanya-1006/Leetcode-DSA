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
        if(!root)
            return ans;
        TreeNode* temp;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int level=0;
        
        
        while(!q.empty())
        {
            
            vector<int> levelWise;
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                levelWise.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                q.pop();
                
            }
            if(level%2==1)
            {
                reverse(levelWise.begin(),levelWise.end());
            }
            
            level++;
            ans.push_back(levelWise);
            
            
            
        }
        
        return ans;
        
    }
};