class Solution {
public:
//     void find(vector<vector<int>>& dungeon,int i,int j,int& sum)
//     {
//         if(i<0 || i>=dungeon.size() || j<0 || j>=dungeon[0].size())
//             return ;
        
        
//         sum+=dungeon[i][j];
//         if(abs(dungeon[i][j+1])<abs(dungeon[i+1][j]))
//         {
//             cout<<i <<j<<endl;
//             find(dungeon,i,j+1,sum);
//         }
        
//         else
//         {
//              cout<<i <<j<<endl;
//            find(dungeon,i+1,j,sum);
//         }
            
            
        
//     }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
        int rows=dungeon.size();
        int cols=dungeon[0].size();
        
        
//         int sum=0;
//         find(dungeon,0,0,sum);
        
//         return sum;
         vector<vector<int>> dp(rows, vector<int>(cols));

        dp[rows - 1][cols - 1] = dungeon[rows - 1][cols - 1] > 0 ? 1 : 1 - dungeon[rows - 1][cols - 1];

        for (int i = rows - 2; i >= 0; i--) {
            dp[i][cols - 1] = max(dp[i + 1][cols - 1] - dungeon[i][cols - 1], 1);
        }

        for (int i = cols - 2; i >= 0; i--) {
            dp[rows - 1][i] = max(dp[rows - 1][i + 1] - dungeon[rows - 1][i], 1);
        }

        for (int i = rows - 2; i >= 0; i--) {
            for (int j = cols - 2; j >= 0; j--) {
                dp[i][j] = max(min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j], 1);
            }
        }

        return dp[0][0];
        
    }
};
