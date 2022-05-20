// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int,char>> temp;
    	for(int i=0;i<n;i++)
    	{
    	    temp.push_back(make_pair(arr[i],'A'));
    	    temp.push_back(make_pair(dep[i],'D'));
    	}
    	sort(temp.begin(),temp.end());
    	int max_here=0,max_so_far=0;
    	for(auto it:temp)
    	{
    	    if(it.second=='A')
    	    {
    	        max_here+=1;
    	        max_so_far=max(max_so_far,max_here);
    	    }
    	    else
    	        max_here-=1;
    	}
    	
    	return max_so_far;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends