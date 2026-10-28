#include <vector>
#include <bitset>

class Solution {
public:
    int minXORPath(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        std::vector<std::bitset<1024>> dp(n);
        
        dp[0][grid[0][0]] = true;
        
        for (int j = 1; j < n; ++j) {
            dp[j] = shiftBits(dp[j - 1], grid[0][j]);
        }
        
        for (int i = 1; i < m; ++i) {
            dp[0] = shiftBits(dp[0], grid[i][0]);
            for (int j = 1; j < n; ++j) {
                dp[j] = shiftBits(dp[j] | dp[j - 1], grid[i][j]);
            }
        }
        
        for (int mask = 0; mask < 1024; ++mask) {
            if (dp[n - 1][mask]) {
                return mask;
            }
        }
        
        return -1;
    }

    int minCost(std::vector<std::vector<int>>& grid) {
        return minXORPath(grid);
    }

private:
    std::bitset<1024> shiftBits(const std::bitset<1024>& currentBits, int val) {
        std::bitset<1024> nextBits;
        for (int mask = 0; mask < 1024; ++mask) {
            if (currentBits[mask]) {
                nextBits[mask ^ val] = true;
            }
        }
        return nextBits;
    }
};
