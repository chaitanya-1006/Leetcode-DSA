class Solution {
public:
    int BS(vector<int>& nums, int target, int start, int end)
    {
        if(start>end)
            return -1;
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            return BS(nums,target,start,mid-1);
        else
            return BS(nums,target,mid+1,end);
    }
    int search(vector<int>& nums, int target) {
        return BS(nums,target,0,nums.size()-1);
    }
};