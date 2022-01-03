class Solution {
public:
    void reverse(vector<int>& nums,int s, int e)
    {
        while(s<=e)
        {
            swap(nums[s++],nums[e--]);
        }
        return ;
    }
    
    
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        int i=n;
        for(;i>=1;i--)
            if(nums[i]>nums[i-1])
                break;
        
        //array is in Descending order
        if(i==0)
        {
            reverse(nums,0,n);
            return;
        }
        
        int j=i+1,smallest=i;
        for(;j<=n;j++)
        {
            if(nums[j]>nums[i-1])
                smallest=j;
        }
        swap(nums[smallest],nums[i-1]);
        
        //ex: 534976
        
// If we traverse from right to left for j, the 1st element we found will be the smallest one comparing to those on the left of the element
//         int j=n;
//         for(;j>=i;j--)
//             if(nums[j]>nums[i-1])
//                 break;
//         swap(nums[j],nums[i-1]);
        
        reverse(nums,i,n);
    }
};
