// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        stack<int> ans;
        vector<int> res;
        int j=n-1;
        int maxRight=a[j];
        while(j>=0)
        {
            
            if(j==n-1)
               ans.push(a[j--]);
             
            else
            {
                if(a[j]<maxRight)
                {
                    j--;
                }
                else
                {
                    ans.push(a[j]);
                    maxRight=a[j--];
                }
            }
        }
        while(!ans.empty())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        
        return res;
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends