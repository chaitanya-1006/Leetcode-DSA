class Solution {
public:
    void Bin_Coeff(int n, int k,vector<vector<int>>& res)
    {
        int ans[n][k];
        int i,j;
        for(i=0;i<n;i++)
        {
            vector<int> temp;
            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                    ans[i][j]=1;
                else
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                
                cout<<ans[i][j];
            }
            
            for(int x=0;x<=i;x++)
            {
                temp.push_back(ans[i][x]);
            }
            res.push_back(temp);
            
            
            
        }
            
    }
    
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        Bin_Coeff(numRows,numRows,res);
        return res;
        
    }
};