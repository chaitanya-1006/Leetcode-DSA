// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        // map<int,int> hash;
        // vector<int> ans;
        // for(int i=0;i<n;i++)
        // {
        //     hash[arr[i]]++;
        //     // if(hash[arr[i]] ==2)
        //     //     ans.push_back(arr[i]);
                
        // }
        // for(auto x: hash)
        // {
        //     if(x.second >=2)
        //         ans.push_back(x.first);
                
        // }
        // if(ans.size()==0)
        //     return vector<int>{-1};
        // // sort(ans.begin(),ans.end());
        // return ans;
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= n*2)
                ans.push_back(i);
        }
        if(ans.size()!=0)
            return ans;
        return vector<int>{-1};
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends