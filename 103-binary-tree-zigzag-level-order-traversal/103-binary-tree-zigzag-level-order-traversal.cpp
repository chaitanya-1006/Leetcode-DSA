class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag = false;
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
           
           while(size--){
                TreeNode*node = q.front();
                q.pop();
                level.push_back( node->val);
                if(node->left != NULL){
                q.push(node->left);
            }
                if(node->right){
                q.push(node->right);
                }
                
            }
            
            
            flag = !flag;
            if(flag==false){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            
        }
        return ans;
        
    }
};