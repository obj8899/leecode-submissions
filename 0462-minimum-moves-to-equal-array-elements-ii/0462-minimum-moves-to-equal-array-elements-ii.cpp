#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int minMoves2(std::vector<int>& nums) {
        int mid = nums.size() / 2;
        std::nth_element(nums.begin(), nums.begin() + mid, nums.end());
        
        int median = nums[mid];
        int moves = 0;
        
        for (int x : nums) {
            moves += std::abs(x - median);
        }
        
        return moves;
    }
};
