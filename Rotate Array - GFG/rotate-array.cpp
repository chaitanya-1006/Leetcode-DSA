// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    int getGCD(int a, int b)
    {
    
        if(a%b==0)
            return b;
        else
            return getGCD(b,a%b);
    }
    
    
    void rotateArr(int arr[], int d, int n){
        d=d%n;
    int gcd=getGCD(n,d);
    int i,j,k;
    for( i=0;i<gcd;i++)
    {
        int temp=arr[i];
        j=i;
        k=(i+d)%n;
        while(k!=i)
        {
            arr[j]=arr[k];
            j=k;
            k+=d;
            k%=n;
        }
        arr[j]=temp;
    }
    
    
    return ;
    }
};





// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends