#include <vector>

class Solution {
private:
    int rows, cols;

    // Helper DFS function to traverse the island and aggregate its sum
    long long dfs(int r, int c, std::vector<std::vector<int>>& grid) {
        // Base case: boundary check or water/visited cell (value <= 0)
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] <= 0) {
            return 0;
        }

        // Add the current cell's value to the island sum
        long long current_value = grid[r][c];

        // "Sink" the cell to 0 to mark it as visited
        grid[r][c] = 0;

        // Explore all 4 directions and accumulate the total sum
        current_value += dfs(r + 1, c, grid);
        current_value += dfs(r - 1, c, grid);
        current_value += dfs(r, c + 1, grid);
        current_value += dfs(r, c - 1, grid);

        return current_value;
    }

public:
    int countIslands(std::vector<std::vector<int>>& grid, int k) {
        rows = grid.size();
        cols = grid[0].size();
        int matchingIslandsCount = 0;

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                // If the cell is an unvisited land cell, start exploring the island
                if (grid[r][c] > 0) {
                    long long totalIslandValue = dfs(r, c, grid);
                    
                    // Check if the total accumulated value is divisible by k
                    if (totalIslandValue % k == 0) {
                        matchingIslandsCount++;
                    }
                }
            }
        }

        return matchingIslandsCount;
    }
};
