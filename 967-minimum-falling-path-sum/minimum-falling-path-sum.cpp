class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n + 1, vector<int> (n + 2, 0));
        for (int i = 1; i <= n; ++i){
            dp[i][0] = INT_MAX;
            dp[i][n + 1] = INT_MAX;
            dp[n][i] = matrix[n - 1][i - 1];
        }
        for (int r = n - 1; r > 0; --r){
            for (int c = n; c > 0; --c) {
                dp[r][c] = matrix[r - 1][c - 1] + min(min(dp[r + 1][c - 1], dp[r + 1][c]), dp[r + 1][c + 1]);
            }
        }
        int minm = INT_MAX;
        for (int c = 1; c <= n; ++c){
            minm = min(minm, dp[1][c]);
        }
        return minm;
    }
};