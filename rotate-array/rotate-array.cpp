class Solution {
public:
    int gcd(int a, int b)
    {
        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);
    }
    
    void rotate(vector<int>& nums, int k) {
        int i,j,m,n,d,temp;
        n=nums.size();
        k=k%n;
        k=(n-k)%n;
        if(n==1||k==0)
            return;
        d=gcd(n,k);
        
        for(i=0;i<d;i++)
        {
            temp=nums[i];
            j=i;
            m=(j+k)%n;
            while(i!=m)
            {
                nums[j]=nums[m];
                j=m;
                m=(j+k)%n;
            }
            nums[j]=temp;
        }
        
    }
};