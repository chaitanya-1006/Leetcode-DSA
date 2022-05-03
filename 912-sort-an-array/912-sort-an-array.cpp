class Solution {
public:
    int size;
    // int parent(int i)
    // {
    //     return (i-1)/2;
    // }
    // int left(int i)
    // {
    //     return (2*i)+1;
    // }
    // int right(int i)
    // {
    //     return (2*i)+2;
    // }
    void maxHeapify(int i,vector<int>& nums,int n)
    {
        //int lt=left(i),rt=right(i);
        int lt=(2*i)+1,rt=(2*i)+2;
        int largest=i;
        if(lt<n && nums[lt]>nums[i])
            largest=lt;
        if(rt<n && nums[rt] >nums[largest])
            largest=rt;
        if(largest!=i)
        {
            swap(nums[i],nums[largest]);
            maxHeapify(largest,nums,n);
        }
        
    }
    

    
    
    void buildHeap(vector<int>& nums)
    {
        for(int i=size/2-1;i>=0;i--)
        {
            maxHeapify(i,nums,size);
        }
    }
    
    
    
    vector<int> sortArray(vector<int>& nums) {
        size=nums.size();
        buildHeap(nums);
        vector<int> ans;
      
        // repeatedly swaping  root with the lastnode, reduce the heap size by 1 and heapify
        
        
        for(int i=size-1;i>0;i--)
        {
            swap(nums[0],nums[i]);
            maxHeapify(0,nums,i);
        }
        return nums;
    }
};