class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,k,n;
        n=nums.size();
        i=j=k=0;
        for(;k<n;k++)
        {
            if(nums[k]==0)
            {
                swap(nums[j],nums[k]);
                swap(nums[i],nums[j]);
                i++;
                j++;
            }else 
            {
                if(nums[k]==1)
                {
                    swap(nums[j++],nums[k]);
                }
            }
            
        }
    }
};