class Solution {
public:
    
//     void heapAlgo(vector<int>& nums, int size,set<vector<int>>& ans)
//     {
//         if(size==1)
//         {
//             ans.insert(nums);
//         }
        
//         for(int i=0;i<size;i++)
//         {
//             heapAlgo(nums,size-1,ans);
//             if(size%2 ==0)
//                 swap(nums[i],nums[size-1]);
//             else
//                 swap(nums[0],nums[size-1]);
//         }
//     }
    
//     int duplicateRemoval(vector<int>& nums,int n)
//     {
//         int j=0;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++)
//         {
//             if(i<n-1 && nums[i]==nums[i+1])
//                 continue;
            
//             nums[j++]=nums[i];
//         }
//         return j;
//     }
    
    void reverse(vector<int>& nums, int i,int j)
    {
        while(i<=j)
            swap(nums[i++],nums[j--]);
    }
    
    // vector<int> next_permutation(vector<int>& nums,int n)
    // {
    //     int i=n-1;
    //     for(;i>0;i--)
    //         if(nums[i]>nums[i-1])
    //             break;
    //     int j=n-1;
    //     for(;j>=i;j--)
    //         if(nums[j]>nums[i-1])
    //             break;
    //     swap(nums[j],nums[i-1]);
    //     reverse(nums,i,n-1);
    //     return nums;
    // }
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>> res;
        
        int n=nums.size();
        // heapAlgo(nums,n,ans);
        // vector<vector<int>> res(ans.begin(),ans.end());
        
        // we can improve TC if we apply next permutation on sorted array 
        
        sort(nums.begin(),nums.end());
        res.push_back(nums);
        
        if(n==1)
            return res;
        
        
        while(true)
        {
            int i=n-1;
            for(;i>0;i--)
                if(nums[i]>nums[i-1])
                    break;
            if(i==0)
            {   
                cout<<"0";
                return res;
            }
            int j=n-1;
            for(;j>=i;j--)
                if(nums[j]>nums[i-1])
                    break;
            swap(nums[j],nums[i-1]);
            reverse(nums,i,n-1);
            res.push_back(nums);

        }
        return res;
    }
};
