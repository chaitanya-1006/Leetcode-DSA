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
    bool isTwoSum(TreeNode* root, int k, unordered_set<int> &s)
    {
        if(!root)
            return 0;
        if(isTwoSum(root->left,k,s)==true)
            return 1;
        if(s.find(k-root->val)!=s.end())
            return 1;
        else
            s.insert(root->val);
        return isTwoSum(root->right,k,s);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return isTwoSum(root,k,s);
    }
};