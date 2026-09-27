class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>>& dp){
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(i == n-1 and j == m-1 and obstacleGrid[i][j] != 1) return 1;
        if(i > n-1 or j > m-1) return 0;
        if(obstacleGrid[i][j] == 1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = (helper(obstacleGrid, i, j+1,dp) + helper(obstacleGrid, i+1, j,dp));
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();  

        vector<vector<int>> dp(n, vector<int>(m, -1));

        
        return helper(obstacleGrid,0,0,dp);
    }
};