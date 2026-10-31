class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long MOD = 1e9 + 7;

        vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
        dp[1] = {1, 1};

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                long long fromLeft = dp[c][0];
                long long fromTop = dp[c + 1][1];

                if (r == 0 && c == 0) continue;

                if (grid[r][c] == 1) {
                    dp[c + 1] = {fromTop, fromLeft};
                } else {
                    long long combined = (fromTop + fromLeft) % MOD;
                    dp[c + 1] = {combined, combined};
                }
            }
            dp[0] = {0, 0};
        }

        return dp[n][0];
    }
};
