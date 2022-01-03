class Solution {
public:
    void heapAlgo(vector<int>& nums, int size,vector<vector<int>>& ans)
    {
        if(size==1)
        {
            ans.push_back(nums);
        }
        
        for(int i=0;i<size;i++)
        {
            heapAlgo(nums,size-1,ans);
            if(size%2 ==0)
                swap(nums[i],nums[size-1]);
            else
                swap(nums[0],nums[size-1]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        heapAlgo(nums,n,ans);
        return ans;
        
    }
};