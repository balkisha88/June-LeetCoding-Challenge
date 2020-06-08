class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int m=coins.size();
        int dp[m+1][amount+1];
        // dp[0][0]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0) dp[i][j]=1;
                else if(i==0)  dp[i][j]=0;
                else
                {
                    // cout<<"hello";
                    dp[i][j]=dp[i-1][j]+ (j-coins[i-1]<0 ? 0 : dp[i][j-coins[i-1]] );
                }
            }
        }
        return dp[m][amount];
        
    }
};
