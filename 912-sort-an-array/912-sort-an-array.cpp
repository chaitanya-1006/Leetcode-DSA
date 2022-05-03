class Solution {
public:
    int size;
    int parent(int i)
    {
        return (i-1)/2;
    }
    int left(int i)
    {
        return (2*i)+1;
    }
    int right(int i)
    {
        return (2*i)+2;
    }
    void maxHeapify(int i,vector<int>& nums,int n)
    {
        int lt=left(i),rt=right(i);
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
    
    int extractMax(vector<int>& nums)
    {
        if(size==0)
            return INT_MAX;
        if(size==1)
        {
            size--;
            return nums[0];
        }
        swap(nums[0],nums[size--]);
        maxHeapify(0,nums,size-1);
        return nums[size];
    }
    
    // void decreaseKey(int i,int val)
    // {
    //     nums[i]=val;
    //     while(i!=0 && nums[parent(i)]>nums[i])
    //     {
    //         swap(nums[parent(i)],nums[i]);
    //         i=parent(i);
    //     }
    // }
    
    
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
        // for(int i=0;i<size;i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        for(int i=size-1;i>0;i--)
        {
            swap(nums[0],nums[i]);
            maxHeapify(0,nums,i);
        }
        return nums;
    }
};