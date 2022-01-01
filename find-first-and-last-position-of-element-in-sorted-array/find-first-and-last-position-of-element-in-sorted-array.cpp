class Solution {
public:
    int lastPos(vector<int>& nums,int s, int e, int target)
    {
        if(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target && (mid==nums.size()-1 || nums[mid+1] !=target))
               return mid;
            if(nums[mid]>target)
               {
                   e=mid-1;
                   return lastPos(nums,s,e,target);
               }
             else
               {
                   s=mid+1;
                   return lastPos(nums,s,e, target);
               }
         }
         return -1;
        
    }
    
    
    
    int firstPos(vector<int>& nums,int s, int e, int target)
    {
        if(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target && (mid==0 || nums[mid-1] !=target))
               return mid;
            if(nums[mid]<target)
               {
                   s=mid+1;
                   return firstPos(nums,s,e,target);
               }
             else
               {
                   e=mid-1;
                   return firstPos(nums,s,e, target);
               }
           }
        return -1 ;
    }
    
//     int firstPos(vector<int>& nums,int s, int e, int target)
//         {
            
//             while(s<=e)
//             {
//                 int mid=s+(e-s)/2;
//                 if(nums[mid]==target)
//                 {  
//                     if(mid==0 || nums[mid-1] !=target)
//                         return mid;
//                     else
//                         e=mid-1;
//                 }
//                 if(nums[mid]<target)
//                    s=mid+1;
//                  if(nums[mid]>target)
//                    e=mid-1;
//             }
//             return -1;
//         }
//     int lastPos(vector<int>& nums,int s, int e, int target)
//         {
            
//             while(s<=e)
//             {
//                 int mid=s+(e-s)/2;
//                 if(nums[mid]==target)
//                 {
//                     if (mid==nums.size()-1 || nums[mid+1] !=target)
//                         return mid;
//                     else
//                         s=mid+1;
//                 }
//                 if(nums[mid]>target)
//                    e=mid-1;
//                 if(nums[mid]<target)
//                    s=mid+1;
//             }
//             return -1;
               
//         }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(firstPos(nums,0,nums.size()-1,target));
            ans.push_back(lastPos(nums,0,nums.size()-1,target));
        }
        
        return ans;
        
    }
};