class Solution {
public:
    int minOperations(int n) {
        int x=n/2;
        if(n==1)
            return 0;
        if(n%2==0)
            return pow(x,2);
        else
            return x*(x+1);
        
    }
};