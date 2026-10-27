#include <vector>

class Solution {
private:
    int rows, cols;

    // Helper function to flood-fill / sink connected land cells
    void dfs(int r, int c, std::vector<std::vector<int>>& grid) {
        // Base case: boundary check or water cell
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 1) {
            return;
        }

        // Change land (0) to water (1) to mark it as visited
        grid[r][c] = 1;

        // Traverse in all 4 directions
        dfs(r + 1, c, grid);
        dfs(r - 1, c, grid);
        dfs(r, c + 1, grid);
        dfs(r, c - 1, grid);
    }

public:
    int closedIsland(std::vector<std::vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        int closedIslandsCount = 0;

        // Step 1: Eliminate all boundary-connected islands
        // Flood fill from the first and last rows
        for (int c = 0; c < cols; ++c) {
            if (grid[0][c] == 0) dfs(0, c, grid);
            if (grid[rows - 1][c] == 0) dfs(rows - 1, c, grid);
        }
        // Flood fill from the first and last columns
        for (int r = 0; r < rows; ++r) {
            if (grid[r][0] == 0) dfs(r, 0, grid);
            if (grid[r][cols - 1] == 0) dfs(r, cols - 1, grid);
        }

        // Step 2: Count the remaining isolated islands
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 0) {
                    closedIslandsCount++;
                    // Sink this closed island so it isn't recounted
                    dfs(r, c, grid);
                }
            }
        }

        return closedIslandsCount;
    }
};
