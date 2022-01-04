class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_here=nums[0],max_so_far=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            max_here=max(nums[i],max_here+nums[i]);
            max_so_far=max(max_here,max_so_far);
        }
        return max_so_far;
        
    }
};