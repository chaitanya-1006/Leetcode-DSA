// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        int i,count=0, majEle=-1;
        for(i=0;i<size;i++)
        {
            if(count==0)
            {
                count++;
                majEle=a[i];
            }
            else
            {
                if(majEle==a[i])
                    count++;
                else
                    count--;
                    
            }
        }
        
        int majEleCount=0;
        for(i=0;i<size;i++)
        {
            if(a[i]==majEle)
                majEleCount++;
        }
        
        if(majEleCount > (size/2))
            return majEle;
        return -1;
        
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends