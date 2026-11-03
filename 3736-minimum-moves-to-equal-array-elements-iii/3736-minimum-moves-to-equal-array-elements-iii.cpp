class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max_val = *std::ranges::max_element(nums); 
        int total_moves = 0;
        for (int num : nums) {
            total_moves += (max_val - num);
        }
        return total_moves;
    }
};
