class Solution {
public:
   int fun(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& dp)
   {
         if(i == 0 && j == 0){
            return grid[0][0];
        }
        
        if( i < 0 || j < 0){
            return 1e9;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        // recursive calls
        int up = grid[i][j] + fun(grid,i-1, j, dp);
        int left = grid[i][j] + fun(grid,i, j-1, dp);
        int ans = min(up, left);
        
        return dp[i][j] = ans;
   }
    int minPathSum(vector<vector<int>>& grid)
    {
        int m=grid.size(),n=grid[0].size();
        // vector<vector<int>> dp(m,vector<int>(n,-1));
                vector<vector<int>> dp(m+1,vector<int>(n+1,INT_MAX));
         dp[1][1]=grid[0][0];
         for(int i=1;i<=m;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 if(i==1 && j==1) continue;
                
                         dp[i][j] = grid[i-1][j-1] + min(dp[i-1][j], dp[i][j-1]);

                 
             }
             
         }
         return dp[m][n];
    }
};