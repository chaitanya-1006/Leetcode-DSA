class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> max_heap;
        vector<int> ans;
        int i=0,n=arr.size();
        for(;i<k;i++)
        {
            max_heap.push(make_pair(abs(arr[i]-x),i));
        }
        for(;i<n;i++)
        {
            int diff=abs(arr[i]-x);
            if(max_heap.top().first>diff)
            {
                max_heap.pop();
                max_heap.push(make_pair(diff,i));
            }
        }
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[max_heap.top().second]);
            max_heap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};