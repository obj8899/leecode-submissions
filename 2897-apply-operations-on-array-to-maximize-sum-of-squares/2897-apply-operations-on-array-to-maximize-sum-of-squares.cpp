class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        constexpr int MOD = 1'000'000'007;
        constexpr int MAX_BIT = 30; // nums[i] <= 10^9, which fits within 30 bits
        
        // Step 1: Count the frequency of set bits at each position across all numbers
        vector<int> bitCount(MAX_BIT, 0);
        for (int num : nums) {
            for (int i = 0; i < MAX_BIT; ++i) {
                if ((num >> i) & 1) {
                    bitCount[i]++;
                }
            }
        }
        
        long long totalSumOfSquares = 0;
        
        // Step 2: Greedily construct the k largest numbers
        for (int step = 0; step < k; ++step) {
            long long currentNum = 0;
            
            // Pull one bit from every position that still has remaining set bits
            for (int i = 0; i < MAX_BIT; ++i) {
                if (bitCount[i] > 0) {
                    currentNum |= (1 << i);
                    bitCount[i]--; // Consume the bit
                }
            }
            
            // Add the square of the constructed number to the total
            long long square = (currentNum * currentNum) % MOD;
            totalSumOfSquares = (totalSumOfSquares + square) % MOD;
        }
        
        return totalSumOfSquares;
    }
};
