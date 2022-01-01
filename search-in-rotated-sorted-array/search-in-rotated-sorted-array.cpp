class Solution {
public:
//         int BS(vector<int>& nums, int s, int e, int target)
//     {
//         int mid,res=-1;
//         while(s<=e)
//         {
//             mid=s+(e-s)/2;
//             if(nums[mid]==target)
//             {
//                 res=mid;
//                 return res;   
//             }
//             if(nums[s]<=nums[mid])
//             {
//                 if(nums[s]<=target && nums[mid]<=target)
//                     e=mid-1;
//                 else
//                     s=mid+1;
//             }
//             else
//             {
//                 if(nums[mid]<=target && target <= nums[e])
//                     s=mid+1;
//                 else
//                     e=mid-1;
//             }
            
//         }
//         return res;
//     }
    
//     int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         // if(n==1)
//         // {
//         //     if(nums[0]==target)
//         //         return 0;
//         //     else 
//         //         return -1;
//         // }
        
//         return BS(nums,0,n-1,target);
//     }
// };
    
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,res=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[s]<=nums[mid])
            {
                if(nums[s]<=target && nums[mid] >= target)
                    e=mid-1;
                else 
                    s=mid+1;
            }
            else
            {
                if(nums[mid]<=target && target <= nums[e])
                    s=mid+1;
                else
                    e=mid-1;
            }
        }
        return -1;
        
        
    }
};