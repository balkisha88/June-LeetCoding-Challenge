//Recursive solution but gives TLE  only 37/62 test cases passed , need to use to memorization
class Solution {
public:
    int path(int i, int j,int n, int m)
    {
        if(i==n-1 && j==m-1)
            return 1;
        if(i>=n || j>=m || i<0 ||j<0)
            return 0;
        
        cout<<i<<j<<" ";
        int out=path(i,j+1,n,m)+path(i+1,j,n,m);
        
        return out;
    }
    int uniquePaths(int m, int n) {
       
        
        
        int i=0,j=0;
        int out=0;
        
        out=path(0,0,n,m);
        
        return out;
    }
};

//Correct solution DP( Dynamic Programming)

class Solution {
public:
    int uniquePaths(int m, int n) {
        
      vector<vector<int>> dp(n,vector<int>(m));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=1;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[n-1][m-1];
    }
};
