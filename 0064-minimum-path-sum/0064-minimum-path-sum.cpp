class Solution {
public:
    int helper(vector<vector<int>>& grid, int i, int j,vector<vector<int>>& dp) {
        int n = grid.size();
        int m = grid[0].size();
        if (i > n - 1 or j > m - 1)
            return INT_MAX;
        if (i == n - 1 and j == m - 1)
            return grid[i][j];

        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = grid[i][j] + min(helper(grid, i + 1, j, dp), helper(grid, i, j + 1,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {

        vector<vector<int>> dp(205 , vector<int>(205,-1));

        return helper(grid, 0, 0,dp);
    }
};