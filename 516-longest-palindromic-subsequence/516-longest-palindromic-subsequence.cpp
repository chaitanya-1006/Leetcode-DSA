class Solution {
public:
    int LCS(string s1, string s2)
    {
        int m=s1.length(),n=s2.length();
        int lcs[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            lcs[i][0]=0;
        }
        for(int j=0;j<=n;j++)
        {
            lcs[0][j]=0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
                if(s1[i-1]==s2[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
        
        return lcs[m][n];
        
    }
    
    int longestPalindromeSubseq(string s) {
        int i=s.length()-1;
        string rev;
        for(i;i>=0;i--)
        {
            rev+=s[i];
            
        }
        cout<<rev;
        return LCS(s,rev);
    }
};