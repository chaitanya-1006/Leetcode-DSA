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
    map<int,map<int,multiset<int>>>hash;
    void verticalUTIL(TreeNode* root, int column,int row)
    {
        if(!root)
            return;
        verticalUTIL(root->left,column-1,row+1);
        hash[column][row].insert(root->val);
        verticalUTIL(root->right,column+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        verticalUTIL(root,0,0);
        vector<vector<int>> ans;
        for(auto col:hash)
        {
            vector<int> colVector;
            for(auto row:col.second)
            {
                for(auto val:row.second)
                    colVector.push_back(val);
            }
            ans.push_back(colVector);
        }
        
        return ans;
        
        
        
    }
};